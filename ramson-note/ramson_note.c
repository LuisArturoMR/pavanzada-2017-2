#include <stdlib.h>
#include <stdio.h>
#include "ramson_note.h"

int compareString(char *magazine, char *randomNote){
  // int * cont = malloc(sizeof(1));
  int cont = 0;
  int andoi = 0;
  int andoj = 0;

  // printf("Soy Rand %s\n", randomNote);
  // printf("Soy mag %s\n", magazine);

  for(int i=0; i<=1; i++){
    andoi++;
    // printf("Ando i: %d\n", andoi);
    for (int j=0; j<=2 ; j++) {
      andoj++;
      // printf("Ando j: %d\n", andoj);
      if (randomNote[i] == magazine[j]) {
        magazine[j] = "";
        cont++;
        // printf("Contador ok: %d\n", cont);
        break;
      }
    }
    // printf("-----\n");
  }
  // printf("Contador real%d\n", cont);
  printf("Palabra final randomNote %s\n", randomNote);
  printf("Palabra final magazine %s\n", magazine);
  return cont;
}
