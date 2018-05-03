#include_GNU_SOURCE
#include<stdio.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
void main()
{
  printf("Thread id %Id\n" , syscall(SYS_gettid));
  printf("Process id %Id\n" , syscall(SYS_getpid));
  printf("Group id %Id\n , syscall(SYS_getgid));
  printf("Parent process id %Id\n" , syscall(SYS_getppid));  
  printf("User id %Id\n" , syscall(SYS_getuid));
 }