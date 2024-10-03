// Online C compiler to run C program online
#include <stdio.h>
extern int k;  // accessible across multiple files
int main() {
   {
    int x = 10;  // Local variable
   }
   static int j = 20;  // Initialized only once. stored in data segment  Retaints its value during function calls
   register int y = 25;  // requesting the variable to be stored in CPU register

  printf("\ny = %d, j = %d, k = %d", y, j, k);
    return 0;
}


/* OUTPUT 
Pending
