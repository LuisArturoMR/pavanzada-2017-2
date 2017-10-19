#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "perfectNumber.h"

/* Add function signatures here */
int main(int argc, char **argv) {
  int number;
  int result;
  printf("Ingresa un número para saber si es perfecto\n" );
  scanf("%d", &number);

  result = isPerfect(number);

  if (result != 1) {
    printf("Your number: %d is not Perfect\n", number);
  }else{
    printf("Your number: %d is Perfect\n", number);
  }
  return 0;
}
