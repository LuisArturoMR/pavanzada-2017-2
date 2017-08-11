#include <stdio.h>


int main(int argn, char **argv){
	int i;
	for(i=1; 1 < argn; i++){
		printf("Hello world %s \n",argv[i]);
	}

	return 0;
}
