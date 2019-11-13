/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Oct 20, 2019

	Exemplos de uso da biblioteca 'limits.h' com inteiros.

	A biblioteca 'limits.h' determina várias constantes para o tamanho dos tipos de dados da linguagem C.
	Tais constantes são chamadas de 'macros'.

	Tipo padrão da linguagem C é o 'int', por isso as abreviações:
	- 'long' == 'long int'
	- 'short' == 'short int'
	- 'unsigned' == 'unsigned int'
	- 'unsigned short' == 'unsigned short int'
	- 'unsigned long' == 'unsigned long int'
	- 'long long' == 'long long int'
*/
#include <stdio.h>
#include <limits.h>

int main()
{

	// menor valor numérico sinalizado de um 'short int' ou 'short'
	printf("Storage size for int: %lu bytes\n\n", sizeof(int));
	
	// menor valor numérico sinalizado de um 'short int' ou 'short'
	printf("SHRT_MIN: %d\n", SHRT_MIN);
	// maior valor numérico sinalizado de um 'short int' ou 'short'
	printf("SHRT_MAX: %d\n", SHRT_MAX);
	// maior valor númerico não sinalizado de um 'unsigned short int', OBS: USHRT_MIN é zero
	printf("USHRT_MAN: %u\n\n", USHRT_MAX);
	
	// maior valor númerico sinalizado de um 'int'
	printf("INT_MAX: %d\n", INT_MAX);
	// menor valor númerico sinalizado de um 'int'
	printf("INT_MIN: %d\n", INT_MIN);
	// maior valor númerico não sinalizado de um 'int', OBS: UINT_MIN é zero
	printf("UINT_MAX: %u\n\n", UINT_MAX);

	// maior valor númerico sinalizado de um 'long int'
	printf("LONG_MAX: %ld\n", LONG_MAX);
	// menor valor númerico sinalizado de um 'long int'
	printf("LONG_MIN: %ld\n", LONG_MIN);
	// maior valor númerico não sinalizado de um 'int', OBS: UINT_MIN é zero
	printf("ULONG_MAX: %lu\n", ULONG_MAX);

	return 0;
}