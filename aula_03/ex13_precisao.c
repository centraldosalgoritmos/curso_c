/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @since Nov 13, 2019

    Exemplificando a declaração e inicialização de variáveis 'double' e 'float'.
    Exemplificando como declarar literais.
	Exemplificando a diferença de precisão.
*/
// gcc ex11_precisao.c -o precisao -lm
#include <stdio.h>
#include <math.h> // biblioteca de funções matemáticas

int main() 
{
    double da = 1.0, db = -4.0000000, dc = 3.9999999;
    float a = 1.0f, b = -4.0000000f, c = 3.9999999f;
     
    printf("Raizes da Equacao (x*x) - 4.0x + 3.9999999 = 0:\n");

    // sqrt() é a função que calcula raiz quadrada de um número e retorna seu valor
    // o valor retornado é um 'double', ou seja 64 bits e 15 casas decimais de precisão
    // esta implementada na biblioteca 'math.h'
    double x1 = (-db + sqrt(db * db - 4.0 * da * dc)) / (2.0 * da);
    double x2 = (-db - sqrt(db * db - 4.0 * da * dc)) / (2.0 * da);

    // a tag %lf é usada para imprimir 'doubles'
    printf("%.5lf \t %.5lf\n", x1, x2);

    // sqrtf() é uma função simila a sqrt(), porém utilizando o tipo 'float'
    // também esta implementada na biblioteca 'math.h'
    float y1 = (-b + sqrtf(b * b - 4.0f * a * c)) / (2.0f * a);
    float y2 = (-b - sqrtf(b * b - 4.0f * a * c)) / (2.0f * a);

    printf("%.5f \t %.5f\n", y1, y2);
    
    return 0;
}  