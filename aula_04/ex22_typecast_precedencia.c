/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company O Cara dos Algoritmos
    @since Nov 22, 2019

    Exemplificando ordem de avaliação da instrução de conversão.
*/
#include<stdio.h>
#include<math.h>
 
int main()
{
    double a = 5.75;
    
    // (int) 5.75 = 5
    float b = (int) a;

    // (int) (5.75 * 5.75)
    // (int) (33.0625) = 33
    float c = (int) (a * a);
    
	// (int) 5.75 * 5.75
	// 5 * 5.75 = 28.75
    float d = (int) a * a;
    
    // (int) pow(5.75,2)
    // (int) 33.0625 = 33
    float e = (int) pow(a,2);

    printf("%.10f %.10f %.10f %.10f\n", b, c, d, e);

    return 0;
}


