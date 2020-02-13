#include <stdio.h>
 
int main (void) {

   int  var, *ptr, **pptr;
   
   var = 3000;
   /* endereco de var */
   ptr = &var;
   /* endereco de ptr */
   pptr = &ptr;

   printf("valor var = %d\n", var );
   printf("valor por *ptr = %d\n", *ptr );
   printf("valor por **pptr = %d\n", **pptr);

   return 0;
}

