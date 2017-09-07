#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "happy.h"

/****************
  * beHappy
  * Given a integer number to know if it is a Happy Number.
  * A Happy Number is when all the digits are square and the
  * result is divided and square again until the result is
  * equal to 1, if is not equal is not a Happy Number.
  * @param:
  *   int number: the number that have to separate and square it
  *   int sum: the temporal sum of the digits of the number
  *   int digit: digit by digit of the number
  * @return:
  * integer result of the happyNumber (1,0)
*/

int beHappy(int number){
  int sum = 0;
  while (number > 0 && sum != 1) {
    if (sum == number)
      return 0;

    int digit = number % 10;
    sum = sum + pow(digit,2);
    number /= 10;
  }

  if (sum == 1 && number == 0) {
    return sum;
  }else{
    beHappy(sum);
  }

}
