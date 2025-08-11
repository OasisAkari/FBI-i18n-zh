#include <3ds.h>
#include <stdlib.h>
#include <string.h>

#include "action.h"
#include "../task/uitask.h"
#include "../../core/ui/error.h"
#include "../../core/ui/prompt.h"
#include "../../core/screen.h"
#include "../../core/ui/list.h"
#include "../../core/ui/ui.h"
#include "../locale.h"
#include "../../core/util.h"

typedef struct {
    linked_list* items;
    list_item* selected;
} deleted_data;

static void action_remove_data_draw_top(ui_view* view, void* data, float x1, float y1, float x2, float y2) {
    task_draw_title_info(view, ((deleted_data *) data)->selected->data, x1, y1, x2, y2);
}

static void action_remove_locale_file(ui_view* view, void* data, u32 response) {
    deleted_data* s_deleted_data = (deleted_data*) data;
    title_info* info = (title_info*) s_deleted_data ->selected->data;
    if(response == PROMPT_YES) {

        char* path = locale_path_for_title(info->titleId);

        FS_Archive sdmc_archive;

        if (R_SUCCEEDED(FSUSER_OpenArchive(&sdmc_archive, ARCHIVE_SDMC, fsMakePath(PATH_EMPTY,"")))) {
            FS_Path* fs_path = util_make_path_utf8(path);

            FSUSER_DeleteFile(sdmc_archive, *fs_path); // TODO error handling

            util_free_path_utf8(fs_path);

            char* msg = (char*) calloc(PATH_MAX+10, sizeof(char));
            snprintf(msg, PATH_MAX+10, "已移除\n%s", path);
            prompt_display_notify("成功", msg, COLOR_TEXT, NULL, NULL, NULL);
            FSUSER_CloseArchive(sdmc_archive);
        }
        else {
            prompt_display_notify("失败", "无法访问文件系统", COLOR_TEXT, NULL, NULL, NULL);
        }

        // Refresh locale info
        info->locale = locale_for_title(info->titleId);
    }
}

//void action_use_system_default(title_info* info, bool* populated) {
//    prompt_display_yes_no("Confirmation", "Reset the locale data for this title?", COLOR_TEXT, info, task_draw_title_info, action_remove_locale_file);
//}

void action_use_system_default(linked_list* items, list_item* selected) {
    deleted_data* data = (deleted_data*) calloc(1, sizeof(deleted_data));
    if(data == NULL) {
        error_display(NULL, NULL, "Failed to allocate delete data.");

        return;
    }

    data->items = items;
    data->selected = selected;
    prompt_display_yes_no("确认", "是否确定重置这个应用的区域和语言设置？", COLOR_TEXT, data,
                          action_remove_data_draw_top, action_remove_locale_file);
}
