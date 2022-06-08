#include<stdio.h>
#include<signal.h>
#include<sys/types.h>

void signal_handler(int signum)
{
	printf("Caught the signal &d\n",signum);
	signal(SIGINT,SIG_DFL);
}
int main()
{
	(void)signal(SIGINT,signal_handler);
	pid_t pid;
	//pid=fork();
	if(pid==0)     //child process
	{
		while(1)
		{
			printf("Hello World \n");
		//	sleep(1);
		}
	}
	else         // parent process
	{
		kill(pid,SIGINT);
		sleep(5);
		kill(pid,SIGINT);
	}
	return 0;
}
