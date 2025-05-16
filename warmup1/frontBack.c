// frontBack.c
// Warmup-1 › frontBack
// Given a string, return a new string where the first and last chars have been exchanged.
#include <string.h>
#include <stdlib.h>

char* frontBack(const char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    if (len <= 1) {
        char* result = malloc(len + 1);
        if (result == NULL) return NULL;
        for (int i = 0; i <= len; i++) {
            result[i] = s[i];
        }
        return result;
    }
    char* result = malloc(len + 1);
    if (result == NULL) return NULL;
    for (int i = 0; i < len; i++) {
        result[i] = s[i];
    }
    result[len] = '\0';
    char temp = result[0];
    result[0] = result[len - 1];
    result[len - 1] = temp;
    return result;
  // TODO: implement swapping first and last character
  return (char*)s;
}
