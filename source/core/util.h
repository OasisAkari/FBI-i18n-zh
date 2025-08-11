#pragma once

#include <stdio.h>

bool util_is_dir(FS_Archive* archive, const char* path);
Result util_get_locale_path(char* out, size_t size);
Result util_get_locale_dir(char* out, size_t size);
Result util_ensure_dir(FS_Archive* archive, const char* path);

FS_Path* util_make_path_utf8(const char* path);
void util_free_path_utf8(FS_Path* path);
FS_Path util_make_binary_path(const void* data, u32 size);

int util_compare_u32(const void* e1, const void* e2);
int util_compare_u64(const void* e1, const void* e2);

FILE* util_open_resource(const char* path);
FS_Archive* util_get_sdmc_archive();

#define R_OUT_OF_MEMORY MAKERESULT(RL_FATAL, RS_OUTOFRESOURCE, RM_APPLICATION, RD_OUT_OF_MEMORY)