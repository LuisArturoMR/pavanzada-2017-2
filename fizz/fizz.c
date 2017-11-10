#include <stdlib.h>
#include <stdio.h>
#include "fizz.h"

void fizzBuzz(int n){
  int i;
    for(i=1; i<=n; ++i)
    {
        if (i % 3 == 0)
            printf("Fizz");
        if (i % 5 == 0)
            printf("Buzz");
        if ((i % 3 != 0) && (i % 5 != 0))
            printf("number=%d", i);
        printf("\n");
    }
}
