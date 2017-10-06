#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "operations.h"
#define MAX_LENGTH 10
#define printDebug(msg) do{ char *value = getenv("OPER_DEBUG");if( !strcmp(value,"t")) printf("%s",msg);}while(0)
char *operationNames_ES[] = {"suma","resta"};
char *operationNames_EN[] = {"add", "subtract"};
char *messages_EN[] = {"Cual es la operacion"};
char *messages_ES[] = {"What is the operation"};


/* Add function signatures here */
int main(int argc, char **argv) {
  /* Start your code here */
  int suma(int a, int b){
    return a+b;
  }
  int resta(int a, int b){
    return a-b;
  }

  char *operationName;
  char message[200];
  int operator1, operator2;
  int(*operation)(int,int); //funcion regresa un entero y recibe dos enteros
  char **operationNames;
  char **messages;
  char *lang;

  lang = getenv("OPER_LANG");

  if (lang != NULL && !strcmp(lang, "EN")) {
    operationNames = operationNames_EN;
    messages = messages_EN;
  } else{
    operationNames = operationNames_ES;
    messages = messages_ES;
  }
  operationName = malloc(sizeof(char)*MAX_LENGTH);
  printf("%s\n", messages[0]);
  scanf("%s", operationName);
  scanf("%d", &operator1);
  scanf("%d", &operator2);
  sprintf(message,"operationName = %s \n",operationName);
  printDebug(message);

  sprintf(message,"operator1 = %d \n",operator1);
  printDebug(message);

  sprintf(message,"operator2 = %d \n",operator2);
  printDebug(message);

  if (!strcmp(operationName, operationNames[0])) {
    operation = suma;
  }
  if (!strcmp(operationName, operationNames[1])) {
    operation = resta;
  }
  printf("%d\n", operation(operator1, operator2) );

  return 0;
}
