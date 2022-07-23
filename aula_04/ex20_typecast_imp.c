/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company O Cara dos Algoritmos
    @since Nov 22, 2019

    Exemplificando conversão implícita (implicit typecast).
*/
#include<stdio.h>

int main() {

    char x = 'E';  // character c
    int y = 10;    // integer x
 
    // x é convertido implícitamente para inteiro (promoção)
    // 'E' =  69
    y = x + y;
    
    // y é convertido implícitamente para 'float'
    // 79 = 79.0f
    float z = y + 1.0;
 
    printf("y = %d, z = %f\n", y, z);
    return 0;
}


