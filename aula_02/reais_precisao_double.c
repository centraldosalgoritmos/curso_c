#include <stdio.h>
#include <math.h> //funcoes matematicas

int main() 
{
    double a = 1.0, b = -4.0000000, c = 3.9999999;
 
    printf("raizes da equacao (x^2) - 4.0x + 3.9999999 = 0:\n");

    //sqrt() eh raiz quadrada
    double x1 = (-b + sqrt(b*b - 4.0*a*c)) / (2.0*a);
    double x2 = (-b - sqrt(b*b - 4.0*a*c)) / (2.0*a);
    
    printf("%.5lf \t %.5lf\n", x1, x2);
    
    return 0;
}  


