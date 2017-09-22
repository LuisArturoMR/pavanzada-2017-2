#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dict.h"

/* Add function signatures here */

typedef struct a{
  char *name;
  int semestre;
} Student;

int main(int argc, char **argv) {
  /* Start your code here */
  // printf("Hello from main\n");
  Dict *students;
  Student st; //Va crear la estructura con el espacio suficiente de sus elementos (es el dato completo)
  Student *newStudent; //Va a crear una variable de 4 bytes donde puede almacenar esa información
  int errorCode;
  char matricula[100];
  students = initDictionary(100, &errorCode);

  st.name = strdup("Angel Perez");
  st.semestre = 8;

  upsertDictionary(students, "0101", (void *)&st,sizeof(Student),&errorCode);

  st.name = "Jesus Lopez";
  st.semestre = 6;
  upsertDictionary(students, "0202", (void *)&st,sizeof(Student),&errorCode);
  printf("Which is the student id: ");
  scanf("%s",matricula);
  newStudent = getDictionary(students, matricula, sizeof(Student), &errorCode);
if (newStudent == NULL) {
  printf("Not found, try with other student\n");
}else{
  printf("Name: %s, semestre: %d\n",newStudent->name,newStudent->semestre);
}


  return 0;
}

// gcc -o students.exe main.c dict.o
