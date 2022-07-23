/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Nov 22, 2019
	Exemplificando usar a função 'scanf' para fazer leitura de valores alfanumericos inseridos pelo teclado.
*/
#include<stdio.h>

int main(void)
{
	char str[10];
  
	printf ("Informe dígitos e letras(MAX 10): ");
	
	scanf ("%10[a-z0-9]", str);
	
	printf ("\n%s", str);

 	return 0;
 }








