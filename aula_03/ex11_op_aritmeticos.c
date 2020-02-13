/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Nov 11, 2019

	Exemplos de Operadores Aritméticos.
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a = 14, b = 3;
	
	printf("%d + %d = %d\n", a, b, a + b); // operador de soma '+'

	printf("%d - %d = %d\n", a, b, a - b); // operador de substração '-'

	printf("%d, %d, %d\n", a, -a, -(-a)); // operador de unário '-'

	printf("%d * %d = %d\n", a, b, a * b); // operador de multiplicação '*'

	printf("%d / %d = %d\n", a, b, a / b); // operador de divisão '/'

	printf("%d %% %d = %d\n", a, b, a % b); // operador de resto (módulo) '%'

	return 0;
}