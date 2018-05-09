#include <sys/stat.h>
#include <stdio.h>

#define FIFO_PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

int main()
{
  
      if (mkfifo("MYFIFO_1", FIFO_PERMS)==0)
            printf("\n \n FIFO created successfully \n \n");
      else
         printf("\n \n FAILED \n \n");
  
}