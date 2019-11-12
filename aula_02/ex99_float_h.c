/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Oct 20, 2019

	Exemplos de uso da biblioteca 'float.h' com números ponto flutuante.
	A biblioteca 'float.h' contém um um conjunto de constantes relacionadas aos tipos ponto flutuante.
	Elas permitem a construção de programas mais portáveis.
	Cada número ponto-flutuante é representado como:
		floating-point = (sinal) precisão x (base ^ expoente)
			sinal: +/-
			base: é a base (radix) da representação utilizada, 
					2 para binário, 
					10 para decimal, 
					16 para hexadecimal.
			expoente: um inteiro entre 'Emin' e 'Emax'.
			precisão: número de dígitos na mantissa (significand).

*/
#include <stdio.h>
#include <float.h>

int main()
{
	printf("Memória ocupada por float: %lu bytes\n", sizeof(float));

	printf("FLT_MAX: %f\n", FLT_MAX);
	printf("FLT_MIN: %f\n", FLT_MIN);
	printf("FLT_MAX (e-notation): %e\n", FLT_MAX);
	printf("FLT_MIN (e-notation): %e\n", FLT_MIN);
	printf("FLT_MANT_DIG: %d\n", FLT_MANT_DIG);
	printf("FLT_MIN_EXP: %d\n", FLT_MIN_EXP);
	printf("FLT_MAX_EXP: %d\n", FLT_MAX_EXP);

	printf("Memória ocupada por double: %lu bytes\n", sizeof(double));
	printf("DBL_MAX: %lf\n", DBL_MAX);
	printf("DBL_MIN: %lf\n", DBL_MIN);
	printf("DBL_MAX (e-notation): %e\n", DBL_MAX);
	printf("DBL_MIN (e-notation): %e\n", DBL_MIN);
	printf("DBL_MANT_DIG: %d\n", DBL_MANT_DIG);
	printf("DBL_MIN_EXP: %d\n", DBL_MIN_EXP);
	printf("DBL_MAX_EXP: %d\n", DBL_MAX_EXP);

	printf("Memória ocupada por long double: %lu bytes\n", sizeof(long double));
	printf("LDBL_MAX (e-notation): %Le\n", LDBL_MAX);
	printf("LDBL_MIN (e-notation): %Le\n", LDBL_MIN);
	printf("LDBL_MANT_DIG: %d\n", LDBL_MANT_DIG);
	printf("LDBL_MIN_EXP: %d\n", LDBL_MIN_EXP);
	printf("LDBL_MAX_EXP: %d\n", LDBL_MAX_EXP);

	// modo de arredondamento utilizado
	// -1 	- Indeterminável
	// 0	- Para zero
	// 1	- Para o mais próximo
	// 2	- Para (+)infinito
	// 3	- Para (-)infinito
	printf("FLT_ROUNDS: %d\n\n", FLT_ROUNDS);	

	return 0;
}