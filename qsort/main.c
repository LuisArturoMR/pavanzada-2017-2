#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "qsort.h"
#define MAX_LENGTH_ORDER 20
#define STUDENTS_LENGTH 3

typedef struct s{
  char *name;
  int matricula;
} Student;

int cmpStudent(void const *element1, void const *element2, int attribute){
  Student *student1 = (Student *) element1;
  Student *student2 = (Student *) element2;
  switch (attribute) {
    case 0: //name
      return strcmp(student1->name,student2->name);
    case 1: //matricula
    return strcmp(student1->matricula,student2->matricula);

  }
}

int cmpNames(void const *element1, void const *element2){
  return cmpStudent(element1,element2,0);
}
int cmpMatriculas(void const *element1, void const *element2){
  Student *student1 = (Student *) element1;
  Student *student2 = (Student *) element2;
  return student1->matricula - student2->matricula;
}

/* Add function signatures here */
int main(int argc, char **argv) {

  char order[MAX_LENGTH_ORDER];
  int neededStudent;
  int i;
  Student key;
  Student *foundStudent;
  Student group[STUDENTS_LENGTH];
  group[0].name = strdup("juanito");
  group[0].matricula = 17;
  group[1].name = strdup("pedro");
  group[1].matricula = 4;
  group[2].name = strdup("mariana"); //arreglo de caracteres y me regresa la dirección (strdup)
  group[2].matricula = 2;
  /* Start your code here */
  printf("Give me the order: ");
  scanf("%s",order);

  if (!strcmp(order,"name")) {
    qsort(group,STUDENTS_LENGTH,sizeof(Student),cmpNames);
  }
  if (!strcmp(order,"matricula")) {
    qsort(group,STUDENTS_LENGTH,sizeof(Student),cmpMatriculas);
  }

  for (i = 0; i < 3; i++) {
    printf("Student %s %d \n",group[i].name, group[i].matricula);
  }

  printf("Which is the id?: ");
  scanf("%d", &neededStudent);
  key.matricula = neededStudent;

  foundStudent = (Student *) bsearch(&key,group, STUDENTS_LENGTH,sizeof(Student),cmpMatriculas);
  if (foundStudent != NULL) {
    printf("Student %s %d \n",foundStudent->name, foundStudent->matricula);
  }else{
    printf("Student not found with id %d\n", neededStudent);
  }

  return 0;
}
