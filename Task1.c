#include<stdio.h>
void main()
{
  char ch;
  FILE *f;
  f=fopen("t.txt" , "r");
  while((ch=fgetc(f))!=EOF)
   printf("%c" , ch);
  fclose(f);
}