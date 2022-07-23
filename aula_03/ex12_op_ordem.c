/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Oct 20, 2019

	Exemplos de Ordem de Avaliação de Operadores Aritméticos.
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a = 14, b = 3, c = -2;
	
	printf("%d\n", a + c / b); 

	printf("%d\n", c + b * a - b);

	printf("%d\n", a * b / c * b);

	printf("%d\n", a * b % c / b);

	printf("%d\n", (a + 5) * b); // parentesis altera a ordem de avaliação

	return 0;
}
