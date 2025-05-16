// diff21.c
// Warmup-1 › diff21
// Given an int n, return the absolute difference between n and 21,
// except return double the difference if n is over 21.
#include <stdlib.h>

int diff21(int n) {
  return (n <= 21) ? (21 - n) : 2 * (n - 21);
  
  /*
    int diff21(int n) {
    if (n <= 21) {
        return 21 - n;
    } else {
        return 2 * (n - 21);
    }
}
  */
  
  // TODO: if (n <= 21) return 21 - n; else return 2 * (n - 21);
  return 0;
}
