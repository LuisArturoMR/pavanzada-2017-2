#include <stdlib.h>
#include <stdio.h>
#include "fizz.h"
/* Add function signatures here */
int main(int argc, char **argv) {
  /* Start your code here */
  int n;
  printf("What is the number that you want to calculate:\n" );
  scanf("%d", &n);
  fizzBuzz(n);
  return 0;
}
