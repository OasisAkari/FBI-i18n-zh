#include "country.h"
#include <stdio.h>
#include <string.h>


const CountryInfo countryInfos[] = {
        {"JP", 1, "Japan (JP)", "JP"},
        {"AI", 8, "Anguilla (AI)", "US"},
        {"AG", 9, "Antigua and Barbuda (AG)", "US"},
        {"AR", 10, "Argentina (AR)", "US"},
        {"AW", 11, "Aruba (AW)", "US"},
        {"BS", 12, "Bahamas (BS)", "US"},
        {"BB", 13, "Barbados (BB)", "US"},
        {"BZ", 14, "Belize (BZ)", "US"},
        {"BO", 15, "Bolivia (BO)", "US"},
        {"BR", 16, "Brazil (BR)", "US"},
        {"VG", 17, "British Virgin Islands (VG)", "US"},
        {"CA", 18, "Canada (CA)", "US"},
        {"KY", 19, "Cayman Islands (KY)", "US"},
        {"CL", 20, "Chile (CL)", "US"},
        {"CO", 21, "Colombia (CO)", "US"},
        {"CR", 22, "Costa Rica (CR)", "US"},
        {"DM", 23, "Dominica (DM)", "US"},
        {"DO", 24, "Dominican Republic (DO)", "US"},
        {"EC", 25, "Ecuador (EC)", "US"},
        {"SV", 26, "El Salvador (SV)", "US"},
        {"GF", 27, "French Guiana (GF)", "US"},
        {"GD", 28, "Grenada (GD)", "US"},
        {"GP", 29, "Guadeloupe (GP)", "US"},
        {"GT", 30, "Guatemala (GT)", "US"},
        {"GY", 31, "Guyana (GY)", "US"},
        {"HT", 32, "Haiti (HT)", "US"},
        {"HN", 33, "Honduras (HN)", "US"},
        {"JM", 34, "Jamaica (JM)", "US"},
        {"MQ", 35, "Martinique (MQ)", "US"},
        {"MX", 36, "Mexico (MX)", "US"},
        {"MS", 37, "Montserrat (MS)", "US"},
        {"AN", 38, "Netherlands Antilles (AN)", "US"},
        {"NI", 39, "Nicaragua (NI)", "US"},
        {"PA", 40, "Panama (PA)", "US"},
        {"PY", 41, "Paraguay (PY)", "US"},
        {"PE", 42, "Peru (PE)", "US"},
        {"KN", 43, "Saint Kitts and Nevis (KN)", "US"},
        {"LC", 44, "Saint Lucia (LC)", "US"},
        {"VC", 45, "Saint Vincent and the Grenadines (VC)", "US"},
        {"SR", 46, "Suriname (SR)", "US"},
        {"TT", 47, "Trinidad and Tobago (TT)", "US"},
        {"TC", 48, "Turks and Caicos Islands (TC)", "US"},
        {"US", 49, "United States (US)", "US"},
        {"UY", 50, "Uruguay (UY)", "US"},
        {"VI", 51, "US Virgin Islands (VI)", "US"},
        {"VE", 52, "Venezuela (VE)", "US"},
        {"AL", 64, "Albania (AL)", "EU"},
        {"AU", 65, "Australia (AU)", "EU"},
        {"AT", 66, "Austria (AT)", "EU"},
        {"BE", 67, "Belgium (BE)", "EU"},
        {"BA", 68, "Bosnia and Herzegovina (BA)", "EU"},
        {"BW", 69, "Botswana (BW)", "EU"},
        {"BG", 70, "Bulgaria (BG)", "EU"},
        {"HR", 71, "Croatia (HR)", "EU"},
        {"CY", 72, "Cyprus (CY)", "EU"},
        {"CZ", 73, "Czech Republic (CZ)", "EU"},
        {"DK", 74, "Denmark (DK)", "EU"},
        {"EE", 75, "Estonia (EE)", "EU"},
        {"FI", 76, "Finland (FI)", "EU"},
        {"FR", 77, "France (FR)", "EU"},
        {"DE", 78, "Germany (DE)", "EU"},
        {"GR", 79, "Greece (GR)", "EU"},
        {"HU", 80, "Hungary (HU)", "EU"},
        {"IS", 81, "Iceland (IS)", "EU"},
        {"IE", 82, "Ireland (IE)", "EU"},
        {"IT", 83, "Italy (IT)", "EU"},
        {"LV", 84, "Latvia (LV)", "EU"},
        {"LS", 85, "Lesotho (LS)", "EU"},
        {"LI", 86, "Liechtenstein (LI)", "EU"},
        {"LT", 87, "Lithuania (LT)", "EU"},
        {"LU", 88, "Luxembourg (LU)", "EU"},
        {"MK", 89, "Macedonia (MK)", "EU"},
        {"MT", 90, "Malta (MT)", "EU"},
        {"ME", 91, "Montenegro (ME)", "EU"},
        {"MZ", 92, "Mozambique (MZ)", "EU"},
        {"NA", 93, "Namibia (NA)", "EU"},
        {"NL", 94, "Netherlands (NL)", "EU"},
        {"NZ", 95, "New Zealand (NZ)", "EU"},
        {"NO", 96, "Norway (NO)", "EU"},
        {"PL", 97, "Poland (PL)", "EU"},
        {"PT", 98, "Portugal (PT)", "EU"},
        {"RO", 99, "Romania (RO)", "EU"},
        {"RU", 100, "Russia (RU)", "EU"},
        {"RS", 101, "Serbia (RS)", "EU"},
        {"SK", 102, "Slovakia and Kosovo (SK)", "EU"},
        {"SI", 103, "Slovenia (SI)", "EU"},
        {"ZA", 104, "South Africa (ZA)", "EU"},
        {"ES", 105, "Spain (ES)", "EU"},
        {"SZ", 106, "Swaziland (SZ)", "EU"},
        {"SE", 107, "Sweden (SE)", "EU"},
        {"CH", 108, "Switzerland (CH)", "EU"},
        {"TR", 109, "Turkey (TR)", "EU"},
        {"GB", 110, "United Kingdom (GB)", "EU"},
        {"ZM", 111, "Zambia (ZM)", "EU"},
        {"ZW", 112, "Zimbabwe (ZW)", "EU"},
        {"AZ", 113, "Azerbaijan (AZ)", "EU"},
        {"MR", 114, "Mauritania (MR)", "EU"},
        {"ML", 115, "Mali (ML)", "EU"},
        {"NE", 116, "Niger (NE)", "EU"},
        {"TD", 117, "Chad (TD)", "EU"},
        {"SD", 118, "Sudan (SD)", "EU"},
        {"ER", 119, "Eritrea (ER)", "EU"},
        {"DJ", 120, "Djibouti (DJ)", "EU"},
        {"SO", 121, "Somalia (SO)", "EU"},
        {"AD", 122, "Andorra (AD)", "EU"},
        {"GI", 123, "Gibraltar (GI)", "EU"},
        {"GG", 124, "Guernsey (GG)", "EU"},
        {"IM", 125, "Isle of Man (IM)", "EU"},
        {"JE", 126, "Jersey (JE)", "EU"},
        {"MC", 127, "Monaco (MC)", "EU"},
        {"TW", 128, "Taiwan (TW)", "TW"},
        {"KR", 136, "South Korea (KR)", "KR"},
        {"HK", 144, "Hong Kong (HK)", "TW"},
        {"MO", 145, "Macao (MO)", "TW"},
        {"ID", 152, "Indonesia (ID)", "US"},
        {"SG", 153, "Singapore (SG)", "US"},
        {"TH", 154, "Thailand (TH)", "US"},
        {"PH", 155, "Philippines (PH)", "US"},
        {"MY", 156, "Malaysia (MY)", "US"},
        {"CN", 160, "China (CN)", "CN"},
        {"AE", 168, "United Arab Emirates (AE)", "US"},
        {"IN", 169, "India (IN)", "EU"},
        {"EG", 170, "Egypt (EG)", "EU"},
        {"OM", 171, "Oman (OM)", "EU"},
        {"QA", 172, "Qatar (QA)", "EU"},
        {"KW", 173, "Kuwait (KW)", "EU"},
        {"SA", 174, "Saudi Arabia (SA)", "US"},
        {"SY", 175, "Syria (SY)", "EU"},
        {"BH", 176, "Bahrain (BH)", "EU"},
        {"JO", 177, "Jordan (JO)", "EU"},
        {"SM", 184, "San Marino (SM)", "EU"},
        {"VA", 185, "Vatican City (VA)", "EU"},
        {"BM", 186, "Bermuda (BM)", "US"}
};

char* region_map(char* string){
    return
            strcmp(string, "JPN") == 0 ? "JP" :
            strcmp(string, "USA") == 0 ? "US" :
            strcmp(string, "EUR") == 0 ? "EU" :
            strcmp(string, "AUS") == 0 ? "EU" :
            strcmp(string, "CHN") == 0 ? "CN" :
            strcmp(string, "KOR") == 0 ? "KR" :
            strcmp(string, "TWN") == 0 ? "TW" :
            NULL;
}

char* default_country(char* string) {
    return
            strcmp(string, "JPN") == 0 ? "JP" :
            strcmp(string, "USA") == 0 ? "US" :
            strcmp(string, "EUR") == 0 ? "GB" :
            strcmp(string, "AUS") == 0 ? "AU" :
            strcmp(string, "CHN") == 0 ? "CN" :
            strcmp(string, "KOR") == 0 ? "KR" :
            strcmp(string, "TWN") == 0 ? "TW" :
            NULL;
}


int filterCountriesByRegion(const char* region, CountryInfo* result) {
    int count = 0;

    // 遍历所有国家信息
    for (int i = 0; i < COUNTRY_COUNT; i++) {
        // 比较地区是否匹配
        if (strcmp(countryInfos[i].region, region) == 0) {
            result[count] = countryInfos[i];
            count++;
        }
    }
    return count;
}

// 根据ID获取国家全名
const char* getCountryFullNameById(int id) {
    for (int i = 0; i < COUNTRY_COUNT; i++) {
        if (countryInfos[i].id == id) {
            return countryInfos[i].full_name;
        }
    }
    return "System Default";
}

const char* getCountryCodeByFullName(char* full_name) {
    for (int i = 0; i < COUNTRY_COUNT; i++) {
        if (strcmp(countryInfos[i].full_name, full_name) == 0) {
            return countryInfos[i].code;
        }
    }
    return "";
}

const char* getCountryCodeById(int id) {
    for (int i = 0; i < COUNTRY_COUNT; i++) {
        if (countryInfos[i].id == id) {
            return countryInfos[i].code;
        }
    }
    return "";
}

// 根据国家代码获取ID
int getCountryIdFromCode(const char* code) {
    if (code == NULL) return -1;

    for (int i = 0; i < COUNTRY_COUNT; i++) {
        if (strcmp(code, countryInfos[i].code) == 0) {
            return countryInfos[i].id;
        }
    }
    return -1;
}