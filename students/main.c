#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "students.h"

typedef struct s{
  char name[100];
  int id;
} Student;

// int main(int argc, char **argv) {
//   Student pAvanzada[10];
//
//   strcpy(pAvanzada[0].name,"Juan");
//   pAvanzada[0].id = 45;
//   strcpy(pAvanzada[1].name,"Francisco");
//   pAvanzada[1].id = 10;
//   strcpy(pAvanzada[2].name,"Pedro");
//   pAvanzada[2].id = 5;
//   strcpy(pAvanzada[3].name,"Luis");
//   pAvanzada[3].id = 80;
//
//   assert(argc == 2);
//   FILE *myFile;
//   myFile = fopen(argv[1], "wb");
//   assert(myFile != NULL);
//
//   for (int i = 0; i < 10; i++) {
//     fwrite(pAvanzada, sizeof(Student),10,myFile);
//     fclose(myFile);
//   }
//
//   return 0;
// }


// int main(int argc, char **argv) {
//
//   assert(argc == 3);
//   FILE *myFile;
//   myFile = fopen(argv[1], "rb");
//   assert(myFile != NULL);
//
//   Student myStudent;
//   int record = atoi(argv[2]);
//   long offset = sizeof(Student)*record;
//   fseek(myFile,offset,SEEK_SET); //me posiciono donde quería
//   fread(&myStudent,sizeof(Student),1,myFile); //lo leo
//   fclose(myFile);
//   printf("Student at %d is: name %s, id %d\n",record,myStudent.name,myStudent.id);
//   return 0;
// }

// int main(int argc, char **argv) {
//
//   assert(argc == 3);
//   FILE *myFile;
//
//   myFile = fopen(argv[1], "r+b");
//   assert(myFile != NULL);
//
//   Student myStudent;
//   int record = atoi(argv[2]);
//   long offset = sizeof(Student)*record;
//   fseek(myFile,offset,SEEK_SET); //me posiciono donde quería
//   fread(&myStudent,sizeof(Student),1,myFile); //lo leo
//
//   printf("Student at %d is: name %s, id %d\n",record,myStudent.name,myStudent.id);
//   printf("New name:");
//   char newName[100];
//   scanf("%s",myStudent.name);
//
//   printf("New id:");
//   int newId;
//   scanf("%d",&myStudent.id);
//   fseek(myFile,offset,SEEK_SET); //me posiciono donde quería
//
//   fwrite(&myStudent, sizeof(Student),1,myFile);
//   fclose(myFile); //debería cerrarse antes, para no usarlo tanto tiempo.
//   return 0;
// }


int main(int argc, char **argv) {

  assert(argc == 3);
  FILE *myFile;

  myFile = fopen(argv[1], "r+b");
  assert(myFile != NULL);

  Student myStudent;
  int record = atoi(argv[2]);
  long offset = sizeof(Student)*record;
  fseek(myFile,offset,SEEK_SET); //me posiciono donde quería
  fread(&myStudent,sizeof(Student),1,myFile); //lo leo

  printf("Student at %d is: name %s, id %d\n",record,myStudent.name,myStudent.id);
  printf("New name:");
  char newName[100];
  scanf("%s",myStudent.name);

  printf("New id:");
  int newId;
  scanf("%d",&myStudent.id);
  fseek(myFile,offset,SEEK_SET); //me posiciono donde quería

  fwrite(&myStudent, sizeof(Student),1,myFile);
  fclose(myFile); //debería cerrarse antes, para no usarlo tanto tiempo.
  return 0;
}
