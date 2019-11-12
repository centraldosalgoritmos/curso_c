#include <stdio.h>
#include <math.h> //funcoes matematicas

int main() 
{
    float a = 1.0f, b = -4.0000000f, c = 3.9999999f;
 
    printf("raizes da equacao (x^2) - 4.0x + 3.9999999 = 0:\n");

    //sqrtf() eh raiz quadrada usando float
    float x1 = (-b + sqrtf(b*b - 4.0f*a*c)) / (2.0f*a);
    float x2 = (-b - sqrtf(b*b - 4.0f*a*c)) / (2.0f*a);
    
    printf("%.5f \t %.5f\n", x1, x2);
    
    return 0;
}  


