#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
 int main()
{
	pid_t pid;
	printf("Helloworld...Before fork..pid is %d\n",getpid());

	pid=fork();
	pid=fork();
	pid=fork();

	if(pid==-1)
	{
		printf("Failed...");
		return 0;
	}
	else
	{
		if(pid==0) //child process
		{
			printf("Helloworld..after fork..pid is %d..and ppid is %d\n",getpid(),getppid());
		}
		else // parent process
		{
			printf("Helloworld..after fork.in the parent pid is %dand ppid is %d\n",getpid(),getppid());
			//while(1)
				sleep(1);
					//wait();
		}
	}
	printf("Helloworld..after fork..pid is %d\n",getpid());
	return 0;
}
