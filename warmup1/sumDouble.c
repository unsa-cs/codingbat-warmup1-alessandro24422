// sumDouble.c
// Warmup-1 › sumDouble
// Given two int values, a and b, return their sum.
// Unless the two values are the same, then return double their sum.
#include <stdio.h>

int sumDouble(int a, int b) {
    if (a == b) {
        return 2 * (a + b);
    } else {
        return a + b;
    }
  // TODO: return (a == b) ? 2 * (a + b) : (a + b);
  return 0;
}
