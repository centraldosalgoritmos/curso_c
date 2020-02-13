#include <stdio.h>

int main () {

   int  var = 20;
   int  *ip;     /* ponteiro */

   ip = &var;  /* armazena o endereço */

   printf("Endereço de var: %x\n", &var  );
   /* endereço armazenado no ponteiro */
   printf("Endereço armazenado em ip: %x\n", ip );
   /* acessa o valor usando o ponteiro */
   printf("Valor armazenado: %d\n", *ip );

   return 0;
}





