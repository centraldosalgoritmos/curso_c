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


