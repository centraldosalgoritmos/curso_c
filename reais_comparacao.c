/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @since Nov 22, 2019

    Exemplificando como funciona a comparação entre ponto flutuantes.
*/

#include <stdio.h>

int main() {

    float x = 0.1;
    double y = 0.1;
    
    if (x == 0.1)
        printf("float != double\n");
    
    if (x == 0.1f)
        printf("float == float\n");
        
    if (y == 1e-1)
        printf("notacao cientifica\n");
}





