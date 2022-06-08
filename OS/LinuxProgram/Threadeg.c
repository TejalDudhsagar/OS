
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>


void *foo(void *arg);

char msg[]= "Hello World";

int main()
{

	pthread_t th1;
        int retval;
      void *retmsg;
       	retval = pthread_create(&th1, NULL, foo,(void *)msg);
        if(retval !=0)
          {   
	   printf("pthread_create failed...\n");
         	return 0;
          }
	printf(" I am the parent process...\n");
           //pthread_join()

	retval= pthread_join(th1, &retmsg);
	if(retval !=0)
	{
		printf("join failed...\n");
		return 0;
	}
	printf("Msg from thread is %s", (char *)msg);

	return 0;
}

          void *foo(void *arg)
	  {
		  printf("I am a thread in execution with the arg %s\n", (char *)arg);
                sleep(10); 
		strcpy(msg,"Bye");
		pthread_exit((void *)msg);

	// pthread_exit()
	
	  }	
