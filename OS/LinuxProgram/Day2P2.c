#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	printf("Linux programming...before fork..pid is %d\n",getpid());
	pid=fork();
	if(pid==-1)
	{
		printf("Failed...\n");
		return 0;
	}
	else
	{
		if(pid==0)
		{
			printf("Linux programming..after fork..pid is %d and ppid is %d\n",getpid(),getppid());
			printf("Child is terminating...\n");
			exit(5);
		}
		else
	        {
			int cpid;
			int status;
			printf("Linux programming.. after fork..in the parent..pid is %d and cpid is %d\n",getpid(),pid);
		//	while(1)
			{
				sleep(5);
				cpid=wait(&status);
				printf("Exited child process id is %d and the exit code is %d\n",cpid,status);
			}
		}
	}
	printf("End of parent child process... after fork..pid is %d\n",getpid());
	return 0;
}																										//																								}
