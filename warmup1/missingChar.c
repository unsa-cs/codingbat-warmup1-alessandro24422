// missingChar.c
// Warmup-1 › missingChar
// Given a string and an int n, return a new string where the char at index n has been removed.
#include <string.h>
#include <stdlib.h>

char* missingChar(const char s[], int n) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    if (n < 0 || n >= len) {
        char* result = malloc(len + 1);
        if (!result) return NULL;
        for (int i = 0; i <= len; i++) {
            result[i] = s[i];
        }
        return result;
    }

    char* result = malloc(len);
    if (!result) return NULL;

    int k = 0;
    for (int i = 0; i < len; i++) {
        if (i != n) {
            result[k++] = s[i];
        }
    }
    result[k] = '\0';

    return result;
  // TODO: implement logic using static buffer or dynamic allocation
  return (char*)s;
}
