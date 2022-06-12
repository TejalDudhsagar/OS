
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
		pid_t pid;
		        printf("Hello world ...before fork...pid is %d\n" , getpid());
			        pid = fork();
					printf("hello world ... after fork...pid is %d\n", getpid());
					 	return 0;
}
