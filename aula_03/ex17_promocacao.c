/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Oct 20, 2019

	Exemplificando promoção de tipos menores para o tipo 'inteiro'.
*/
#include <stdio.h>

int main()
{
	// char armazena de -128 até 127
	char a = 30, b = 40, c = 10, z = 5;
	char d = (a * b) / c; // (1200) / 10 ???

	printf("%d\n", d);

	char x = -128;

	printf("Decimal: %d\n", x * 999999);
	printf("Tamanho: %lu\n", sizeof(x * 999999));

	printf("Decimal: %d\n", x * 99999999);
	printf("Tamanho: %lu\n", sizeof(x * 99999999));

	printf("Decimal: %ld\n", x * 99999999999);
	printf("Tamanho: %lu\n", sizeof(x * 99999999999));
	
	return 0;
}
