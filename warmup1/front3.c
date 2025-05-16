// front3.c
// Warmup-1 › front3
// Given a string, we'll say that the front is the first 3 chars of the string.
// If the string length is less than 3, the front is whatever is there.
// Return a new string which is 3 copies of the front.
#include <string.h>
#include <stdlib.h>

char* front3(const char s[]) {
    int len = 0;

    while (s[len] != '\0' && len < 3) {
        len++;
    }

    int front_len = (len < 3) ? len : 3;

    char* result = malloc(3 * front_len + 1);
    if (result == NULL) return NULL;

    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < front_len; j++) {
            result[k++] = s[j];
        }
    }

    result[k] = '\0';
    return result;
  
  // TODO: implement logic copying front three times
  return (char*)s;
}
