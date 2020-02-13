/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @since Nov 20, 2019

    Exemplificando o uso da biblioteca 'float.h'
    FLT - float
    DBL - double
    LBL - long double
    DIG - dígitos de precisão
    EXP - expoente
    MAN_DIG - dígitos para mantissa
    EPSILON - diferença entre 1 e o menor valor representável maior que 1.

*/
#include <stdio.h>
#include <float.h>

int main()
{
	printf("Regra de Arredondamento (0:zero, 1:mais próximo, 2: +inf, 3:-inf, -1:unknown): %d\n\n", FLT_ROUNDS);

	printf("Memória ocupada por float: %lu bytes\n", sizeof(float));
	printf("FLOAT max: %.10e\n", FLT_MAX);
	printf("FLOAT min: %.10e\n", FLT_MIN);
	printf("FLOAT precisão: %d\n", FLT_DIG);
	printf("FLOAT exp max: %d\n", FLT_MAX_10_EXP);
	printf("FLOAT exp min: %d\n", FLT_MIN_10_EXP);
	printf("FLOAT digitos para mantissa: %d\n", FLT_MANT_DIG);
	printf("FLOAT epsilon: %.10e\n\n", FLT_EPSILON);

	printf("Memória ocupada por double: %lu bytes\n", sizeof(double));
	printf("DOUBLE max: %.10e\n", DBL_MAX);
	printf("DOUBLE min: %.10e\n", DBL_MIN);
	printf("DOUBLE precisão: %d\n", DBL_DIG);
	printf("DOUBLE exp max: %d\n", DBL_MAX_10_EXP);
	printf("DOUBLE exp min: %d\n", DBL_MIN_10_EXP);
	printf("DOUBLE digitos para mantissa: %d\n", DBL_MANT_DIG);
	printf("DOUBLE epsilon: %.10le\n\n", DBL_EPSILON);

	printf("Memória ocupada por long double: %lu bytes\n", sizeof(long double));
	printf("LONG DOUBLE max: %.10Le\n", LDBL_MAX);
	printf("LONG DOUBLE min: %.10Le\n", LDBL_MIN);
	printf("LONG DOUBLE precisão: %d\n", LDBL_DIG);
	printf("LONG DOUBLE exp max: %d\n", LDBL_MAX_10_EXP);
	printf("LONG DOUBLE exp min: %d\n", LDBL_MIN_10_EXP);
	printf("LONG DOUBLE digitos para mantissa: %d\n", LDBL_MANT_DIG);
	printf("LONG DOUBLE epsilon: %.10Le\n", LDBL_EPSILON);

	return 0;
}