// backAround.c
// Warmup-1 › backAround
// Given a string, take the last char and return a new string with the last char
// added at the front and back, so "cat" yields "tcatt". The string length will be at least 1.
#include <string.h>
#include <stdlib.h>

char* backAround(const char s[]) {
      int len = 0;
    while (s[len]) len++;

    char last = s[len - 1];

    char* result = malloc(len + 3);
    if (!result) return NULL;

    result[0] = last;
    for (int i = 0; i < len; i++)
        result[i + 1] = s[i];
    result[len + 1] = last;
    result[len + 2] = '\0';

    return result;
  // TODO: implement logic adding last char front and back
  return (char*)s;
}
