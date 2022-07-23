/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Nov 20, 2019

	Exemplificando o uso da biblioteca 'limits.h'.
*/
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("1 byte = %d bits\n", CHAR_BIT);
	printf("1 word = %d bits\n\n", __WORDSIZE);

	printf("CHAR min: %d\n", CHAR_MIN);
	printf("CHAR max: %d\n", CHAR_MAX);
	printf("Signed CHAR min: %d\n", SCHAR_MIN); // signed char min
	printf("Signed CHAR max: %d\n", SCHAR_MAX); // signed char max
	printf("Unsigned CHAR max: %d\n\n", UCHAR_MAX); // unsigned char max, min = 0

	printf("SHORT INT min: %d\n", SHRT_MIN); // short int min
	printf("SHORT INT max: %d\n", SHRT_MAX); // short int max
	printf("Unsigned SHORT INT max: %hu\n\n", USHRT_MAX); // unsigned short int max, min = 0

	printf("INT min: %d\n", INT_MIN); // int min
	printf("INT max: %d\n", INT_MAX); // int max
	printf("Unsigned INT max: %u\n\n", UINT_MAX); // unsigned int max, min = 0

	printf("LONG INT min: %ld\n", LONG_MIN);
	printf("LONG INT max: %ld\n", LONG_MAX);
	printf("Unsigned LONG INT max: %lu\n\n", ULONG_MAX); // unsigned long int max, min = 0

	printf("LONG LONG INT min: %lld\n", LLONG_MIN);
	printf("LONG LONG INT max: %lld\n", LLONG_MAX);
	printf("Unsigned LONG LONG INT max: %llu\n\n", ULLONG_MAX); // unsigned long long int max, min = 0

	return 0;
}
