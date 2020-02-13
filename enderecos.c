/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @since Nov 22, 2019

    Exemplificando como imprimir valores e endereços de variáveis.
*/
#include <stdio.h>

int main()
{
	int i = 10;
	char c = 'A';

    //valores
	printf("%d\t\t%c\n", i, c);
	//endereço memoria inteiro
	printf("%u\t%u\n", &i, &c);
	//endereço memória em hexadecimal
	printf("%p\t%p\n", &i, &c);

	return 0;
}





