/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Nov 22, 2019
	Exemplificando usar a função 'scanf' para fazer leitura de valores numéricos inseridos pelo teclado.
*/
#include<stdio.h>

int main(void)
{
	char str[50];
  
	//só aceita caracteres numéricos
	printf("Digite a senha numérica [0-9]:");
	scanf("%[0-9]s",str);
	printf("Senha: %s\n",str);

 	return 0;
 }






