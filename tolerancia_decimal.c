#include <stdio.h>
#include <stdlib.h>// abs()

int main(void)
{
 	double x = 1.1, y = 2.2, soma;
 	double tolerancia = 0.00001;
 	
 	soma = x + y;

 	if (soma == 3.3) 
 		printf("Iguais\n");
 	else if (abs(soma - 3.3) < tolerancia) 	
 		printf("Dentro da tolerancia\n");

  	return 0;
}






