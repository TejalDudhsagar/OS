//main.c

#include <stdio.h>

int g=5;//external variable
int add(int, int);

int x=2;
int sub(int,int);

int y=5;
int mul(int, int);

int z=7;
int div(int,int);
int main (){
	int sum=add (4,9);
	printf("Addition is: %d \n",sum);
	int diff=sub(20,10);
		printf("Substraction is: %d \n",diff);
 
	int multiply=mul(20,10);
           printf("Multiplication is: %d \n",multiply);

	int division=div(20,5);
        printf("Division is: %d \n ",division);

}
