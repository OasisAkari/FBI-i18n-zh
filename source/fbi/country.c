#include "country.h"
#include <stdio.h>
#include <string.h>


const CountryInfo countryInfos[] = {
        {"JP", 1, "日本 | Japan (JP)", "JP"},
        {"AI", 8, "安圭拉 | Anguilla (AI)", "US"},
        {"AG", 9, "安提瓜和巴布达 | Antigua and Barbuda (AG)", "US"},
        {"AR", 10, "阿根廷 | Argentina (AR)", "US"},
        {"AW", 11, "阿鲁巴 | Aruba (AW)", "US"},
        {"BS", 12, "巴哈马 | Bahamas (BS)", "US"},
        {"BB", 13, "巴巴多斯 | Barbados (BB)", "US"},
        {"BZ", 14, "伯利兹 | Belize (BZ)", "US"},
        {"BO", 15, "玻利维亚 | Bolivia (BO)", "US"},
        {"BR", 16, "巴西 | Brazil (BR)", "US"},
        {"VG", 17, "英属维尔京群岛 | British Virgin Islands (VG)", "US"},
        {"CA", 18, "加拿大 | Canada (CA)", "US"},
        {"KY", 19, "开曼群岛 | Cayman Islands (KY)", "US"},
        {"CL", 20, "智利 | Chile (CL)", "US"},
        {"CO", 21, "哥伦比亚 | Colombia (CO)", "US"},
        {"CR", 22, "哥斯达黎加 | Costa Rica (CR)", "US"},
        {"DM", 23, "多米尼克 | Dominica (DM)", "US"},
        {"DO", 24, "多米尼加共和国 | Dominican Republic (DO)", "US"},
        {"EC", 25, "厄瓜多尔 | Ecuador (EC)", "US"},
        {"SV", 26, "萨尔瓦多 | El Salvador (SV)", "US"},
        {"GF", 27, "法属圭亚那 | French Guiana (GF)", "US"},
        {"GD", 28, "格林纳达 | Grenada (GD)", "US"},
        {"GP", 29, "瓜德罗普 | Guadeloupe (GP)", "US"},
        {"GT", 30, "危地马拉 | Guatemala (GT)", "US"},
        {"GY", 31, "圭亚那 | Guyana (GY)", "US"},
        {"HT", 32, "海地 | Haiti (HT)", "US"},
        {"HN", 33, "洪都拉斯 | Honduras (HN)", "US"},
        {"JM", 34, "牙买加 | Jamaica (JM)", "US"},
        {"MQ", 35, "马提尼克 | Martinique (MQ)", "US"},
        {"MX", 36, "墨西哥 | Mexico (MX)", "US"},
        {"MS", 37, "蒙特塞拉特 | Montserrat (MS)", "US"},
        {"AN", 38, "荷属安的列斯 | Netherlands Antilles (AN)", "US"},
        {"NI", 39, "尼加拉瓜 | Nicaragua (NI)", "US"},
        {"PA", 40, "巴拿马 | Panama (PA)", "US"},
        {"PY", 41, "巴拉圭 | Paraguay (PY)", "US"},
        {"PE", 42, "秘鲁 | Peru (PE)", "US"},
        {"KN", 43, "圣基茨和尼维斯 | Saint Kitts and Nevis (KN)", "US"},
        {"LC", 44, "圣卢西亚 | Saint Lucia (LC)", "US"},
        {"VC", 45, "圣文森特和格林纳丁斯 | Saint Vincent and the Grenadines (VC)", "US"},
        {"SR", 46, "苏里南 | Suriname (SR)", "US"},
        {"TT", 47, "特立尼达和多巴哥 | Trinidad and Tobago (TT)", "US"},
        {"TC", 48, "特克斯和凯科斯群岛 | Turks and Caicos Islands (TC)", "US"},
        {"US", 49, "美国 | United States (US)", "US"},
        {"UY", 50, "乌拉圭 | Uruguay (UY)", "US"},
        {"VI", 51, "美属维尔京群岛 | US Virgin Islands (VI)", "US"},
        {"VE", 52, "委内瑞拉 | Venezuela (VE)", "US"},
        {"AL", 64, "阿尔巴尼亚 | Albania (AL)", "EU"},
        {"AU", 65, "澳大利亚 | Australia (AU)", "EU"},
        {"AT", 66, "奥地利 | Austria (AT)", "EU"},
        {"BE", 67, "比利时 | Belgium (BE)", "EU"},
        {"BA", 68, "波斯尼亚和黑塞哥维那 | Bosnia and Herzegovina (BA)", "EU"},
        {"BW", 69, "博茨瓦纳 | Botswana (BW)", "EU"},
        {"BG", 70, "保加利亚 | Bulgaria (BG)", "EU"},
        {"HR", 71, "克罗地亚 | Croatia (HR)", "EU"},
        {"CY", 72, "塞浦路斯 | Cyprus (CY)", "EU"},
        {"CZ", 73, "捷克共和国 | Czech Republic (CZ)", "EU"},
        {"DK", 74, "丹麦 | Denmark (DK)", "EU"},
        {"EE", 75, "爱沙尼亚 | Estonia (EE)", "EU"},
        {"FI", 76, "芬兰 | Finland (FI)", "EU"},
        {"FR", 77, "法国 | France (FR)", "EU"},
        {"DE", 78, "德国 | Germany (DE)", "EU"},
        {"GR", 79, "希腊 | Greece (GR)", "EU"},
        {"HU", 80, "匈牙利 | Hungary (HU)", "EU"},
        {"IS", 81, "冰岛 | Iceland (IS)", "EU"},
        {"IE", 82, "爱尔兰 | Ireland (IE)", "EU"},
        {"IT", 83, "意大利 | Italy (IT)", "EU"},
        {"LV", 84, "拉脱维亚 | Latvia (LV)", "EU"},
        {"LS", 85, "莱索托 | Lesotho (LS)", "EU"},
        {"LI", 86, "列支敦士登 | Liechtenstein (LI)", "EU"},
        {"LT", 87, "立陶宛 | Lithuania (LT)", "EU"},
        {"LU", 88, "卢森堡 | Luxembourg (LU)", "EU"},
        {"MK", 89, "北马其顿 | Macedonia (MK)", "EU"},
        {"MT", 90, "马耳他 | Malta (MT)", "EU"},
        {"ME", 91, "黑山 | Montenegro (ME)", "EU"},
        {"MZ", 92, "莫桑比克 | Mozambique (MZ)", "EU"},
        {"NA", 93, "纳米比亚 | Namibia (NA)", "EU"},
        {"NL", 94, "荷兰 | Netherlands (NL)", "EU"},
        {"NZ", 95, "新西兰 | New Zealand (NZ)", "EU"},
        {"NO", 96, "挪威 | Norway (NO)", "EU"},
        {"PL", 97, "波兰 | Poland (PL)", "EU"},
        {"PT", 98, "葡萄牙 | Portugal (PT)", "EU"},
        {"RO", 99, "罗马尼亚 | Romania (RO)", "EU"},
        {"RU", 100, "俄罗斯 | Russia (RU)", "EU"},
        {"RS", 101, "塞尔维亚 | Serbia (RS)", "EU"},
        {"SK", 102, "斯洛伐克和科索沃 | Slovakia and Kosovo (SK)", "EU"},
        {"SI", 103, "斯洛文尼亚 | Slovenia (SI)", "EU"},
        {"ZA", 104, "南非 | South Africa (ZA)", "EU"},
        {"ES", 105, "西班牙 | Spain (ES)", "EU"},
        {"SZ", 106, "斯威士兰 | Swaziland (SZ)", "EU"},
        {"SE", 107, "瑞典 | Sweden (SE)", "EU"},
        {"CH", 108, "瑞士 | Switzerland (CH)", "EU"},
        {"TR", 109, "土耳其 | Turkey (TR)", "EU"},
        {"GB", 110, "英国 | United Kingdom (GB)", "EU"},
        {"ZM", 111, "赞比亚 | Zambia (ZM)", "EU"},
        {"ZW", 112, "津巴布韦 | Zimbabwe (ZW)", "EU"},
        {"AZ", 113, "阿塞拜疆 | Azerbaijan (AZ)", "EU"},
        {"MR", 114, "毛里塔尼亚 | Mauritania (MR)", "EU"},
        {"ML", 115, "马里 | Mali (ML)", "EU"},
        {"NE", 116, "尼日尔 | Niger (NE)", "EU"},
        {"TD", 117, "乍得 | Chad (TD)", "EU"},
        {"SD", 118, "苏丹 | Sudan (SD)", "EU"},
        {"ER", 119, "厄立特里亚 | Eritrea (ER)", "EU"},
        {"DJ", 120, "吉布提 | Djibouti (DJ)", "EU"},
        {"SO", 121, "索马里 | Somalia (SO)", "EU"},
        {"AD", 122, "安道尔 | Andorra (AD)", "EU"},
        {"GI", 123, "直布罗陀 | Gibraltar (GI)", "EU"},
        {"GG", 124, "根西岛 | Guernsey (GG)", "EU"},
        {"IM", 125, "马恩岛 | Isle of Man (IM)", "EU"},
        {"JE", 126, "泽西岛 | Jersey (JE)", "EU"},
        {"MC", 127, "摩纳哥 | Monaco (MC)", "EU"},
        {"TW", 128, "台湾 | Taiwan (TW)", "TW"},
        {"KR", 136, "韩国 | South Korea (KR)", "KR"},
        {"HK", 144, "香港 | Hong Kong (HK)", "TW"},
        {"MO", 145, "澳门 | Macao (MO)", "TW"},
        {"ID", 152, "印度尼西亚 | Indonesia (ID)", "US"},
        {"SG", 153, "新加坡 | Singapore (SG)", "US"},
        {"TH", 154, "泰国 | Thailand (TH)", "US"},
        {"PH", 155, "菲律宾 | Philippines (PH)", "US"},
        {"MY", 156, "马来西亚 | Malaysia (MY)", "US"},
        {"CN", 160, "中国 | China (CN)", "CN"},
        {"AE", 168, "阿拉伯联合酋长国 | United Arab Emirates (AE)", "US"},
        {"IN", 169, "印度 | India (IN)", "EU"},
        {"EG", 170, "埃及 | Egypt (EG)", "EU"},
        {"OM", 171, "阿曼 | Oman (OM)", "EU"},
        {"QA", 172, "卡塔尔 | Qatar (QA)", "EU"},
        {"KW", 173, "科威特 | Kuwait (KW)", "EU"},
        {"SA", 174, "沙特阿拉伯 | Saudi Arabia (SA)", "US"},
        {"SY", 175, "叙利亚 | Syria (SY)", "EU"},
        {"BH", 176, "巴林 | Bahrain (BH)", "EU"},
        {"JO", 177, "约旦 | Jordan (JO)", "EU"},
        {"SM", 184, "圣马力诺 | San Marino (SM)", "EU"},
        {"VA", 185, "梵蒂冈 | Vatican City (VA)", "EU"},
        {"BM", 186, "百慕大 | Bermuda (BM)", "US"}
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
    return "系统默认";
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