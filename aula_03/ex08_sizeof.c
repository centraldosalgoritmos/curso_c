/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Oct 20, 2019

	Exemplos do uso da função sizeof para descobrir a quantidade de bytes de cada tipo de dado.
	A quantidade de bytes de cada tipo depende da plataforma alvo.
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{

	// a quantida de bytes depende da plataforma
	printf("8 bits = 1 Byte\n");
	printf("char %lu Byte(s)\n", sizeof(char));
	printf("bool %lu Byte(s)\n", sizeof(bool));
	printf("int %lu Byte(s)\n", sizeof(int));
	printf("float %lu Byte(s)\n", sizeof(float));
	printf("double %lu Byte(s)\n", sizeof(double));
	printf("void %lu Byte(s)\n", sizeof(void));

	return 0;
}
