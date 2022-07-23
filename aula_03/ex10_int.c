/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company O Cara dos Algoritmos
    @since Oct 20, 2019

    Exemplificando como declarar e inicializar variáveis inteiras.
    Como exibir seus valores nos sistemas Decimal, Octal e Hexadecimal.
*/
#include<stdio.h>

int main() {

	int negativo; // declarando apenas
	int doze = 0xA; // declarando e inicializando com um valor
	int dez = 012, fafa = 0xFAFA; // declarando múltiplas variáveis numa mesma linha
	
	negativo = -21; // atribuindo um valor, após a declaração

	printf("Decimal: %d, Hex: %X, Octal: %o \n", doze, doze, doze);
	printf("Decimal: %d, Hex: %X, Octal: %o \n", dez, dez, dez);
	printf("Decimal: %d, Hex: %x, Octal: %o \n", fafa, fafa, fafa);
	printf("Decimal: %d, Hex: %x, Octal: %o \n", negativo, negativo, negativo);
	
	return 0;
}
