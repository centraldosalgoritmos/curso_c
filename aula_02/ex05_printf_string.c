/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company O Cara dos Algoritmos
	@since Oct 20, 2019

	Exemplos de uso da função printf com strings.
*/
#include <stdio.h>

int main()
{
	
	printf("_%s_\n", "Curso de Linguagem C");
	printf("_%.10s_\n", "Curso de Linguagem C");
	printf("_%-25s_\n", "Curso de Linguagem C");
	printf("_%-15s_\n", "Curso de Linguagem C");
	printf("_%.15s_\n", "Curso de Linguagem C");
	printf("_%15.10s_\n", "Curso de Linguagem C");
	printf("_%-15.10s_\n", "Curso de Linguagem C");

	return 0;
}
