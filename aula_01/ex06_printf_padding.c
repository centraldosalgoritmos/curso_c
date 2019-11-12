/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Oct 20, 2019

	Exemplos de uso padding na função printf.
*/
#include <stdio.h>

int main()
{

	// 5 espaços alinhando a direita
	printf("%5d \n", 13);
	// 5 espaços alinhando a esquerda
	printf("%-5d \n", 13);
	// 5 espaços, alinhando a direita, prenchido com zeros a esquerda
	printf("%05d \n", 13);
	// espaços passados como parametro
	printf("%*c\n", 15, '-');

	return 0;
}

























