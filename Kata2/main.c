#include <stdio.h>
#include <stdlib.h>
#include "kata2.h"

int main(int argc, char const *argv[]) {

  const char *word[2];
  word[0] = "Hello";
  word[1] = "World";
	int len = 11;
	int *result = getLength(*word, len);

  if (result != 0) {
    printf("Length last word: %d \n", result);
  }else{
    printf("Ups it is not a last word :( \n" );
  }

}
