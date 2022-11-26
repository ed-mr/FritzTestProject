#include <stdio.h>

int calc(int val) {
  return 2 * val + 17;
}

int main() {
  int i = 42;
  printf("hello xxx: calc(%d) = %d\n", i, calc(i));
  if ( calc(42) != 101 ) return -1;
  return 0;
}

