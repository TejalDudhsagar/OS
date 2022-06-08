
#include<stdio.h>
#include<unistd.h>

int main()
{
	char *const ls_argv[] ={"ls","l",0};
	printf("Before calling exec.....\n");
	printf("listing all files in the directory....\n");
	execl("/bin/ls","ls",0);
	execv("/bin/ls",ls_argv);


	printf("After listing the files..... hope this gets printed.... but not...\n");
	return 0;
}
