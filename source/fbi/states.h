#include "states_data.h"

#define STATES_COUNT 122
#define MAX_VALUE_LENGTH 128

int listStates(char* country, char* result[MAX_VALUE_LENGTH]);
const char* getStateCodeByName(char* country, char* name);