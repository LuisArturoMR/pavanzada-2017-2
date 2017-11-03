#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS     100

unsigned int total;

void *add100(void *threadid)
{
  long tid;
  tid = (long)threadid;
  printf("Adding 100 #%ld!\n", tid);
  total += 100;
  pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
  pthread_t threads[NUM_THREADS];
  int rc;
  long t;
  total = 0;
  printf("Initial Total = %d\n", total);
  for(t=0; t<NUM_THREADS; t++){
     printf("In main: creating thread %ld\n", t);
     rc = pthread_create(&threads[t], NULL, add100, (void *)t);
     if (rc){
        printf("ERROR; return code from pthread_create() is %d\n", rc);
        exit(-1);
     }
  }
  for (t = 0; t < NUM_THREADS; t++) {
    pthread_join(threads[t], NULL);
  }

  printf("Final Total = %d\n", total);
  /* Last thing that main() should do */
  pthread_exit(NULL);
}
