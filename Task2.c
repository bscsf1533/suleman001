#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/type.h>
#include<stdlib.h>
void main()
{
  FILE *f;
  long int pid, tid;
  char enviroment[100];
  f=fopen("t.txt" , "w+");
  pid=getpid();
  fprintf(f, "Process id is: ");
  fprintf(f, "%Id" , pid);
  tid=getgid();
  fprintf(f, "\nThread id is: ");
  fprintf(f , "%Id" , tid);
  strcpy(enviroment , getenv("USER"));
  fprintf(f, \nEnviroment);
  fclose(f);
}