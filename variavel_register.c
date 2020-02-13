#include <stdio.h>

int main() 
{
	register int m = 8, e = 4, power = 1;

	/* 
		Um uso comum do especificador register
		são nos indices do laço for, devido
		o constante acesso a essa variável.
	*/
	for (; e--;) power *= m;
	
	printf("%d\n", power);
    
    return 0;
}


