
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
		  pid_t pid;
		  	  printf("Hello world ...before fork...pid is %d\n" , getpid());
			            pid = fork();
				    	  if (pid == -1)
						  	  {
								            printf("Failed...\n");
									    	  return 0;
										  	  }
					  	  else
							  	  {
									  	  if (pid == 0) //child process
											  	  {	  
													  	  printf("hello world ... after fork...pid is %d and ppid is %d\n", getpid(), getppid());
														  	  }
										  	  else // parent process
												  	  {
														  		  printf("hello world ... after fork...in the parent pid is %d and cpid is %d\n", getpid(), pid);
																  		  while(1)
																			  			  sleep(1);
																		  //	 wait();
																		  	
																				  }
											  printf("Hello world ...after fork...pid is %d\n" , getpid());
								  }
															  	  	  return 0;
								  }
