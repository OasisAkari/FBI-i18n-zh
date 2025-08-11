#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <3ds.h>
#include <3ds/services/fs.h>

#include "util.h"
#include "task/task.h"

bool util_is_dir(FS_Archive* archive, const char* path) {
    Result res = 0;

    FS_Path* fsPath = util_make_path_utf8(path);
    if(fsPath != NULL) {
        Handle dirHandle = 0;
        if(R_SUCCEEDED(res = FSUSER_OpenDirectory(&dirHandle, *archive, *fsPath))) {
            FSDIR_Close(dirHandle);
        }

        util_free_path_utf8(fsPath);
    } else {
        res = R_OUT_OF_MEMORY;
    }

    return R_SUCCEEDED(res);
}

// Returns whether directory exists
Result util_get_locale_path(char* out, size_t size) {
    FILE* config_file = util_open_resource("/locales.conf");
    if (config_file != NULL) {
        char *buffer = (char*) calloc(size, sizeof(char));

        while(fgets(buffer, size, config_file) != NULL) {
            char* newline = strchr(buffer, '\n');
            buffer[size-1] = '\0';
            if(newline != NULL) {
                *newline = '\0';
            }

            // Some backwards compatibility stuff here..
            if (strstr(buffer, "%s") == NULL) {
                if (buffer[size-2] == '/')
                    strcat(buffer, "%s.txt");
                else
                    strcat(buffer, "/%s.txt");
            }

            strncpy(out, buffer, size);
            out[strlen(buffer)] = '\0';
            free(buffer);
            return 1;
        }
    }

    // Default to Luma
    char* fallback = "/luma/titles/%s/locale.txt";
    strncpy(out, fallback, strlen(fallback) + 4);
    out[strlen(fallback)] = '\0';
    return 0;
}

Result util_ensure_dir(FS_Archive* archive, const char* path) {
    Result res = 0;

    if(!util_is_dir(archive, path)) {
        FS_Path* fsPath = util_make_path_utf8(path);
        if(fsPath != NULL) {
            FSUSER_DeleteFile(*archive, *fsPath);
            if (!R_SUCCEEDED(res = FSUSER_CreateDirectory(*archive, *fsPath, 0))) {
                // Try recursive
                int pathlen = strlen(path);

                for (int i = 0; i < pathlen; i++) {
                    if (path[i] == '/') {
                        char* parent_path = (char*) malloc(sizeof(char) * (i + 1));
                        strncpy(parent_path, path, i);
                        parent_path[i] = '\0';
                        FS_Path* fsParentPath = util_make_path_utf8(parent_path);
                        if (!R_SUCCEEDED(res = FSUSER_CreateDirectory(*archive, *fsParentPath, 0))) {
                            return res; // :(
                        }
                        util_free_path_utf8(fsParentPath);
                        free(parent_path);
                    }
                }

            }

            util_free_path_utf8(fsPath);
        } else {
            res = R_OUT_OF_MEMORY;
        }
    }

    return res;
}

// Populates `out` with the directory that is the most common ancestor
Result util_get_locale_dir(char* out, size_t size) {
    Result res = 0;

    // Probably not very efficient...
    if (R_SUCCEEDED(res = util_get_locale_path(out, size))) {
        char* substr = strstr(out, "%s"); // Finds the first instance of "%s"
        if (substr != NULL)
            out[strlen(out) - strlen(substr)] = '\0'; // Chops it off using "\0"
    }
    return res;
}

FS_Path* util_make_path_utf8(const char* path) {
    size_t len = strlen(path);

    u16* utf16 = (u16*) calloc(len + 1, sizeof(u16));
    if(utf16 == NULL) {
        return NULL;
    }

    ssize_t utf16Len = utf8_to_utf16(utf16, (const uint8_t*) path, len);

    FS_Path* fsPath = (FS_Path*) calloc(1, sizeof(FS_Path));
    if(fsPath == NULL) {
        free(utf16);
        return NULL;
    }

    fsPath->type = PATH_UTF16;
    fsPath->size = (utf16Len + 1) * sizeof(u16);
    fsPath->data = utf16;

    return fsPath;
}

void util_free_path_utf8(FS_Path* path) {
    free((void*) path->data);
    free(path);
}

FS_Path util_make_binary_path(const void* data, u32 size) {
    FS_Path path = {PATH_BINARY, size, data};
    return path;
}

int util_compare_u32(const void* e1, const void* e2) {
    u32 id1 = *(u32*) e1;
    u32 id2 = *(u32*) e2;

    return id1 > id2 ? 1 : id1 < id2 ? -1 : 0;
}

int util_compare_u64(const void* e1, const void* e2) {
    u64 id1 = *(u64*) e1;
    u64 id2 = *(u64*) e2;

    return id1 > id2 ? 1 : id1 < id2 ? -1 : 0;
}

FILE* util_open_resource(const char* path) {
    u32 realPathSize = strlen(path) + 16;
    char realPath[realPathSize];
    snprintf(realPath, realPathSize, "sdmc:/%s", path);
    FILE* fd = fopen(realPath, "rb");

    if(fd != NULL) {
        return fd;
    } else {
        snprintf(realPath, realPathSize, "romfs:/%s", path);

        return fopen(realPath, "rb");
    }
}
