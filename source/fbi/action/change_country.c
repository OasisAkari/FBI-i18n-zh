#include <3ds.h>
#include <string.h>
#include <stdlib.h>

#include "action.h"
#include "../task/uitask.h"
#include "../../core/ui/error.h"
#include "../../core/ui/prompt.h"
#include "../../core/screen.h"
#include "../../core/ui/list_old.h"
#include "../../core/ui/ui.h"
#include "../locale.h"

// TODO duplicate code? (see section/config.c)
typedef struct {
    linked_list* title_data;
    list_item* selected;
    u32 count;
    Handle cancelEvent;
    bool populated;
    list_item_old items[COUNTRY_COUNT];
} country_data;

static void action_set_country(country_data* data, char* name, bool populated) {
    title_info* info = (title_info*) data->selected->data;
    const char* full_name = getCountryCodeByFullName(name);
    if (R_SUCCEEDED(set_country_for_title((info->titleId), full_name))) {
        // Refresh locale info

        info->locale = locale_for_title(info->titleId);

        char* template = "Country has been set to %s.";
        char* message = calloc(strlen(template) + strlen(name), sizeof(char));
        snprintf(message, strlen(template) + strlen(name), template, name);
        prompt_display_notify("Set Country", message, COLOR_TEXT, NULL, NULL, NULL);
    }
    else {
        // error_display_res(data, ui_draw_title_info, false, "Failed to set country (does locales directory exist?)");
        error_display(data, NULL, "Failed to set country\n(does locales directory exist?)");
    }
}

static void country_draw_top(ui_view* view, void* data, float x1, float y1, float x2, float y2, list_item_old* selected) {
    task_draw_title_info(view, ((country_data*) data)->selected->data, x1, y1, x2, y2);
}

static void country_update(ui_view* view, void* data, list_item_old** items, u32** itemCount, list_item_old* selected, bool selectedTouched) {
    country_data* listData = (country_data*) data;

    if(hidKeysDown() & KEY_B) {
        ui_pop();
        list_destroy_old(view);
        free(listData);
        return;
    }

//    if(!listData->selected) { // This probably should never trigger
//        for (int i = 0; i < RGN_MAX; i++) {
//            list_item_old item;
//            strncpy(item.name, country_to_string(i), NAME_MAX);
//            item.color = COLOR_TEXT;
//            item.data = action_set_country;
//            listData->items[i] = item;
//        }
//        listData->title_info = NULL;
//        listData->populated = true;
//        listData->count = RGN_MAX;
//    }

    if(selected != NULL && selected->data != NULL && (selectedTouched || (hidKeysDown() & KEY_A))) {
        void(*action)(country_data*, char* name, bool*)
        = (void(*)(country_data*, char* name, bool*)) selected->data;

        ui_pop();
        list_destroy_old(view);

        action(listData, selected->name, &listData->populated);

        free(data);

        return;
    }

    if(*itemCount != &listData->count || *items != listData->items) {
        *itemCount = &listData->count;
        *items = listData->items;
    }
}

void action_change_country(linked_list* items, list_item* selected) {
    title_info* info = selected->data;
    Region region = region_for_title(info->titleId);
    if (region == RGN_NONE){
        error_display(NULL, NULL, "Please select a region first.");
        return;
    }
    char* region_str = region_map((char*)region_to_string(region));
    CountryInfo filtered_regions[COUNTRY_COUNT] = {};
    int country_count = filterCountriesByRegion(region_str, filtered_regions);

    country_data* data = (country_data*) calloc(1, sizeof(country_data));
    for (int i = 0; i < country_count; i++) {
        list_item_old item;
        strncpy(item.name, filtered_regions[i].full_name, NAME_MAX);
        item.color = COLOR_TEXT;
        item.data = action_set_country;
        data->items[i] = item;
    }
    data->title_data = items;
    data->selected = selected;
    data->populated = true;
    data->count = country_count;
    list_display_old("Select Country", "A: Select, B: Return", data, country_update, country_draw_top);
}
