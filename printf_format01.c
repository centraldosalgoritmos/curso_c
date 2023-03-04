/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @review Mar 04, 2023

    Exemplificando como:
    1 - Declarar e inicializar variáveis do tipo 'int'.
    2 - Como funciona a representação em binário de caracteres usando o tipo 'char'.
    3 - Por isso, como o tipo 'char' pode ser manipulado como 'int'.
*/
#include <stdio.h>

int main()
{
    int number = 13;
    // margem a direita
    printf(" %5d \n", number);
    // margem a esquerda
    printf(" %-5d \n", number);
    // margem a direita com 5 zeros
    printf(" %05d \n", number);
    // formato hexadecimal
    printf(" %#x \n", number);
    // comprimento dinamico
    printf("---%*d----\n", 6, number);

    return 0;
}


