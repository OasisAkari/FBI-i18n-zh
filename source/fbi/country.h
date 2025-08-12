

typedef struct {
    const char* code;
    int id;
    const char* full_name;
    const char* region;
} CountryInfo;

extern const CountryInfo countryInfos[];
char* region_map(char* string);
char* default_country(char* string);
int filterCountriesByRegion(const char* region, CountryInfo* result);
const char* getCountryFullNameById(int id);
int getCountryIdFromCode(const char* code);
const char* getCountryCodeByFullName(char* full_name);
const char* getCountryCodeById(int id);

#define COUNTRY_COUNT 133