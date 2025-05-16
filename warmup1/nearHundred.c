// nearHundred.c
// Warmup-1 › nearHundred
// Given an int n, return true if it is within 10 of 100 or 200.
// Note: Math.abs(n-100) <= 10 or Math.abs(n-200) <= 10
#include <stdbool.h>
#include <stdlib.h>

bool nearHundred(int n) {
    int diff100 = n - 100;
    if (diff100 < 0) diff100 = -diff100;

    int diff200 = n - 200;
    if (diff200 < 0) diff200 = -diff200;

    if (diff100 <= 10 || diff200 <= 10) {
        return true;
    }
  // TODO: return (abs(n-100) <= 10 || abs(n-200) <= 10);
  return false;
}
