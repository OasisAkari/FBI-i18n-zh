#pragma once

#include <sys/syslimits.h>

#include "ui.h"

#define TEXTURE_SELECTION_OVERLAY 12

typedef struct {
    char name[NAME_MAX];
    u32 color;
    void* data;
} list_item_old;

void list_display_old(const char* name, const char* info, void* data, void (*update)(ui_view* view, void* data, list_item_old** contents, u32** itemCount, list_item_old* selected, bool selectedTouched),
                                                                  void (*drawTop)(ui_view* view, void* data, float x1, float y1, float x2, float y2, list_item_old* selected));
void list_destroy_old(ui_view* view);