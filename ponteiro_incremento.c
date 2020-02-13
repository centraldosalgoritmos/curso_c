#include <stdio.h>

int main () {

   int var[] = {5, 10, 15, 20};
   int *ptr;

   ptr = var;
	
   for (int i = 0; i < 4; i++) {
      printf("endereC'o var[%d] = %x\n", i, ptr );
      printf("valor var[%d] = %d\n", i, *ptr );
      /* move to the next location */
      ptr++;
   }
	
   return 0;
}






