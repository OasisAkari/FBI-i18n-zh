#pragma once
#include <sys/syslimits.h>
#include <stdio.h>

typedef struct ui_view_s ui_view;

typedef struct meta_info_s {
    char shortDescription[0x100];
    char longDescription[0x200];
    char publisher[0x100];
    u32 region;
    u32 texture;
} meta_info;

typedef struct {
    FILE* config_file;
    char path[PATH_MAX];
} config_info; // TODO Why is this defined here?

void task_draw_meta_info(ui_view* view, void* data, float x1, float y1, float x2, float y2);
void task_draw_ext_save_data_info(ui_view* view, void* data, float x1, float y1, float x2, float y2);
void task_draw_file_info(ui_view* view, void* data, float x1, float y1, float x2, float y2);
void task_draw_pending_title_info(ui_view* view, void* data, float x1, float y1, float x2, float y2);
void task_draw_system_save_data_info(ui_view* view, void* data, float x1, float y1, float x2, float y2);
void task_draw_ticket_info(ui_view* view, void* data, float x1, float y1, float x2, float y2);
void task_draw_title_info(ui_view* view, void* data, float x1, float y1, float x2, float y2);

#include "listextsavedata.h"
#include "listpendingtitles.h"
#include "listsystemsavedata.h"
#include "listtickets.h"
#include "listtitles.h"
#include "listfiles.h"