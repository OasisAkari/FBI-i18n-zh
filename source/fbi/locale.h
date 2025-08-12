#pragma once
#include <3ds/services/cfgu.h>
#include "country.h"
#include "states.h"

// These align with CFG_Region in 3ds/services/cfgu.h
typedef enum {
    JPN = 0,
    USA,
    EUR,
    AUS,
    CHN,
    KOR,
    TWN,
    RGN_MAX,
    RGN_NONE = -1
} Region;

// These align with CFG_Language in 3ds/services/cfgu.h
typedef enum {
    JP = 0,
    EN,
    FR,
    DE,
    IT,
    ES,
    ZH,
    KO,
    NL,
    PT,
    RU,
    TW,
    LNG_MAX,
    LNG_NONE = -1
} Language;

typedef struct {
    u64 title_id;
    char* title_id_str;
    Region region;
    Language language;
    char* country;
    char* state;
} Locale;

Region region_from_string(char* string);
Language language_from_string(char* string);

Region region_from_string_display(char* string);
Language language_from_string_display(char* string);

const char* region_to_string(Region region);
const char* language_to_string(Language language);

const char* region_to_string_display(Region region);
const char* language_to_string_display(Language language);

char* locale_path_for_title(u64 titleId);
Locale* locale_for_title(u64 titleId);
Region region_for_title(u64 titleId);
Language language_for_title(u64 titleId);
char* country_for_title(u64 titleId);
char* state_for_title(u64 titleId);

Result set_region_language_country_state_for_title(u64 titleId, Region region, Language language, const char* country, char* state);
Result set_region_for_title(u64 titleId, Region region);
Result set_language_for_title(u64 titleId, Language language);
Result set_country_for_title(u64 titleId, const char* country);
Result set_state_for_title(u64 titleId, char* state);