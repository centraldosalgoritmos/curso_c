/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company O Cara dos Algoritmos
    @since Nov 22, 2019

    Exemplificando conversão explícita (explicit typecast).
*/
#include<stdio.h>
 
int main()
{
    double x = 1.2;
    double y = 0.96867543266666666;
    float k;
    int z;
    
    // conversao explicita de double para int (truncamento)
    z = (int)x;
    // subtracao do valor ascii entre char
    k = (float)y;
 
    printf("x = %.2lf\n", x);
    printf("z = %d\n", z);
    printf("y = %.20lf\n", y);
    printf("k = %.20f\n", k);
 
    return 0;
}


