/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Nov 22, 2019

	Exemplificando usar a função 'scanf' para fazer leitura de valores inteiros inseridos pelo teclado.
*/
#include <stdio.h>

int main()
{
	int mesas, cadeiras;
	int i, j;

	scanf("%d", &mesas);
	// o espaço antes da tag '%d' consome o 'ENTER' precionado no scanf acima.
	scanf(" %d", &cadeiras);

	printf("Octal:%o %o\n", mesas, cadeiras);
	printf("Hexa:%d %d\n", mesas, cadeiras);
	printf("Decimal:%d %d\n", mesas, cadeiras);

	scanf("%o %x", &i, &j);
	printf("Octal:%o Hexa:%x\n", i, j);
	printf("Inteiros %d %d\n", i, j);

	return 0;
}
