/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @since Nov 18, 2019

    Exemplificando o uso da biblioteca 'stdbool.h'.
    Exemplificando como declarar variáveis do tipo bool.
	Exemplificando como usar as constantes 'true' e 'false'.
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool p = true, q = false;

	printf("p =%7d\n", p);
	printf("q =%7d\n", q);

	printf("p + p =%3d\n", p + p);
	printf("p - q =%3d\n", p - q);
	printf("q - p =%3d\n", q - p);

	return 0;
}