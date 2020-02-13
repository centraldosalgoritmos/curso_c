#include <stdio.h>

int main (void) {

   char *names[] = {
      "Nabson",
      "Fernanda",
      "Felipe",
      "Marcos"
   };

   for (int i = 0; i < 4; i++) {
      printf("names[%d] = %s\n", i, names[i] );
   }
   
   return 0;
}

