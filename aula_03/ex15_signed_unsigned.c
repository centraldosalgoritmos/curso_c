/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company O Cara dos Algoritmos
    @since Nov 20, 2019

    Exemplificando a declaração e inicialização de variáveis 'signed' e 'unsigned'.
    Exemplificando o intervalo de valores para variáveis 'signed' e 'unsigned'.
*/
#include <stdio.h>

int main() 
{

    signed char x = -28; // 1111 1111 1111 1111 1111 1111 1110 0100 = FF FF FF E4
    unsigned char y = x; // 0000 0000 0000 0000 0000 0000 1110 0100 = 00 00 00 E4

    signed int w = -999999999; // 1100 0100 0110 0101 0011 0110 0000 0001 = C4 65 36 01
    unsigned int z = w;        // 1100 0100 0110 0101 0011 0110 0000 0001 = C4 65 36 01

    // os resultados são diferentes por causa da 'promoção inteira'
    printf("x=(%x, %x) y(%x, %x)\n", x, x, y, y);
    
    // como já estamos trabalhando com inteiros, todos armazenam a mesma representação
    printf("w=(%x, %x) z(%x, %x)\n", w, w, z, z);

    return 0;
}  
