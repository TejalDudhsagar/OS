
#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int main()
{
	//SIG_IGN will make signals ignore
	signal(SIGINT,SIG_IGN);
	while(1)
	  {
	  printf("hello world\n");
	  sleep(1);
	   }
	    return 0;
	 }
