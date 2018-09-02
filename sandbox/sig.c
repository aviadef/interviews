#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void sighandler(int);
void sleep(void);

int main () {
   signal(SIGFPE, sighandler);

   for(;;) {
      printf("Going to sleep for a second...\n");
      sleep();
   }
   return(0);
}

void sighandler(int signum) {
   printf("Caught signal %d, coming out...\n", signum);
   exit(1);
}


void sleep(void)
{
 int volatile i;
 int volatile j;

 for(i=0;i<255;i++)
    for(j=0;j<255;j++)
}


	      