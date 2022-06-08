
//signal handling

#include<stdio.h>
#include<unistd.h>
#include<signal.h>
int main()
{
	int count=0;
//SIG_IGN will make signals ignore
signal(SIGINT,SIG_IGN);
while(1)
  {
  printf("hello world\n");
   sleep(1);
    count++;
     printf("value of count .....%d\n,",count);
     //process will ignore signal upto 10
     	if(count==10)
     	//default behaviour is meant to kill program
     	 signal(SIGINT,SIG_DFL);
     	 	}
     	 		return 0;
	}
