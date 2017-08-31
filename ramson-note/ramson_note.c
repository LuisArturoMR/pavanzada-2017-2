#include <stdlib.h>
#include <stdio.h>
#include "ramson_note.h"

int compareString(char *magazine, char *randomNote){
  int cont = 0;

  for(int i=0; i<=1; i++){
    for (int j=0; j<=2 ; j++) {
      if (randomNote[i] == magazine[j]) {
        magazine[j] = "";
        cont++;
        break;
      }
    }
  }
  return cont;
}
