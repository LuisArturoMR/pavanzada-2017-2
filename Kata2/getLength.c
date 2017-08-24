#include <stdio.h>
#include <stdlib.h>
#include "kata2.h"

int * getLength(char **text, int len){
	int i,j;
	int *tempo = 0;
	int *result = (int *)calloc(2, sizeof(int));

	for(i=0;i<len; i++){
		if(text[i] != " "){
			tempo = tempo + 1;
		}else{
      tempo = 0;
    }
	}
	return tempo;
}
