// notString.c
// Warmup-1 › notString
// Given a string, return a new string where "not " has been added to the front.
// However, if the string already begins with "not", return the string unchanged.
#include <string.h>
#include <stdlib.h>

char* notString(const char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    if (len >= 3 && s[0] == 'n' && s[1] == 'o' && s[2] == 't') {
        char* result = malloc(len + 1);
        if (!result) return NULL;
        for (int i = 0; i <= len; i++) {
            result[i] = s[i];
        }
        return result;
    }

    char* result = malloc(len + 5);
    if (!result) return NULL;

    result[0] = 'n';
    result[1] = 'o';
    result[2] = 't';
    result[3] = ' ';

    for (int i = 0; i <= len; i++) {
        result[i + 4] = s[i];
    }

    return result;
  // TODO: implement logic using static buffer or dynamic allocation
  return (char*)s;
}
