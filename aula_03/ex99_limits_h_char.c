/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Oct 20, 2019

	Exemplos de uso da biblioteca 'limits.h' com caracteres.
*/
#include <stdio.h>
#include <limits.h>

int main()
{

	// quantidade de bits ocupada por um 'char'
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	// maior valor númerico sinalizado de um 'char'
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	// menor valor númerico sinalizado de um 'char'
	printf("CHAR_MIN: %d\n\n", CHAR_MIN);
	// maior valor númerico sinalizado de um 'char'
	printf("SCHAR_MAX: %d\n", SCHAR_MAX);
	// menor valor númerico sinalizado de um 'char'
	printf("SCHAR_MIN: %d\n\n", SCHAR_MIN);
	// maior valor númerico não sinalizado de um 'unsigned char', OBS: UCHAR_MIN é zero
	printf("UCHAR_MIN: %u\n", UCHAR_MAX);


	return 0;
}