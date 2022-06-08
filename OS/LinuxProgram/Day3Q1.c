
// creating exec

#include<stdio.h>
 #include<unistd.h>


 int main()
 {

 printf("Before callimg exec....\n");
 printf("listing all files in the directory....\n");
 execl("/bin/ls","ls",0);
 printf("After listing the files..... hope this gets printed...but not...\n");
 return 0;
 		}
