/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Oct 20, 2019

	Exemplos de uso da função printf com números inteiros.
*/
#include <stdio.h>

int main()
{
	// imprimindo um número 'inteiro decimal'
	printf("Numero inteiro decimal: %d\n", 12);

	// imprimindo um número 'inteiro octal'
	printf("Numero inteiro octal: %o\n", 12);	

	// imprimindo um número 'inteiro hexadecimal'
	printf("Numero inteiro hexadecimal: %x\n", 12);

	// imprimindo um número 'inteiro long'
	//printf("Numero: %d\n", 999999999999999999);
	printf("Numero inteiro longo decimal: %ld\n", 999999999999999999);
	printf("Numero inteiro longo octal: %lo\n", 999999999999999999);
	printf("Numero inteiro longo hexadecimal: %lx\n", 999999999999999999);

	// imprimindo um número 'inteiro nao sinalizado'
	printf("Número inteiro com sinal: %d\n", -150);
	printf("Seu valor sem sinal: %u\n", -150);
	
	// imprimindo um número inteiro 'curto'
	printf("Número inteiro curto: %hd\n", 250);
	printf("Número inteiro curto: %hd\n", 131073);

	return 0;
}








