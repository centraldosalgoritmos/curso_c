/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @since Nov 13, 2019

    Exemplificando como:
    1 - Declarar e inicializar variáveis do tipo 'char'.
    2 - Como funciona a representação em binário de caracteres usando o tipo 'char'.
    3 - Por isso, como o tipo 'char' pode ser manipulado como 'int'.
*/
#include <stdio.h>
 
int main()
{
    char a = 'a'; // Declarando e inicializando a variável 'a'
    char A = 'A', b = 'B'; // Declarando e inicializando as variáveis 'A' e 'B'
    char z; // Apenas declarando a variável 'z'

    z = 'z;' // atribuindo um valor para a variável 'z'

    printf("%c = %d\n", a, a); // 'a' = 97 = 0110 0001

    printf("%c = %d\n", A, A); // 'A' = 65 = 0100 0001
    
    printf("%d\n", a - A); // 'a' - 'A' = 97 - 65 = 32, 0110 0001 - 0100 0001 = 0010 0000 = 32
   
    printf("Maiúsculo: %c, Minúsculo: %c\n", b, b+32);

    printf("Minúsculo: %c, Maiúsculo: %c\n", z, z-32);

	printf("???: %c\n", 98); // 98 = 'b' = 0110 0010
	printf("???: %c\n", 67); // 67 = 'C' = 0100 0011
 
    return 0;
}