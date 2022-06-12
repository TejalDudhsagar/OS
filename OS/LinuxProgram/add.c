//add.c

#include <stdio.h>
int add(int a,int b){
	extern int g;
	printf("add function \n");
	printf("Value of g= %d \n",g);
	return (a+b);
}

