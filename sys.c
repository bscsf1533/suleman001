#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
void main() 
{
  printf("pid : %d!\n" , getpid()) ;
  printf("uid : %d!\n" , getuid()) ;
  printf("groupid : %d\n" , getgid()) ;
  printf("groupid : %d\n" , gettid()) ;
  printf("groupid : %d\n" , getppid()) ;
  printf("environment variable(USER): %s\n", getenv("USER")) ;
}