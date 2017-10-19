#include <stdlib.h>
#include <stdio.h>
#include "perfectNumber.h"

#define printDebug(msg) do{ char *value = getenv("OPER_DEBUG");if( !strcmp(value,"t")) printf("%s",msg);}while(0)

/****************
  * isPerfect
  * Given a integer number to know if it is a Perfect Number.
  * A Perfect Number is a positive integer that is equal to the
  * sum of all its positive divisors except itself.
  * @param:
  *   int number: the number to check if it is a Perfect Number
  * @return:
  * integer result of the happyNumber (1,0,n) 1= True, 0= False, n != 1 = False
*/

int isPerfect(int number){
  if (number <= 0) { //Check if is a positive number and different of cero
            return 0;
        }
        int sum = 0;
        for (int i = 1; i < number; i++) {
          sprintf(message,"number = %d \n",number);
          printDebug(message);
            if (number % i == 0) { //Only integer divisors
                sum += i;
            }
        }
        return sum == number; //if number is Perfect sum == 1 else it will be false

}
