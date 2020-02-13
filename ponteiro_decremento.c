#include <stdio.h>

int main (void) 
{

   	int  var[] = {10, 100, 200};
   	int  *ptr = &var[2];

   	for (int i = 3; i > 0; i--) {
      	printf("endereço var[%d] = %x\n", i-1, ptr );
      	printf("valor var[%d] = %d\n", i-1, *ptr );
      
      	ptr--;
   	}
	
   	return 0;
}




