/*
	@author marcosmapl
	@email marcos.lima@icomp.ufam.edu.br
	@company Devcated
	@since Oct 20, 2019

	Exemplos de uso da função printf com números ponto flutuante.
*/
#include <stdio.h>

int main()
{
	printf("R$ %6.2f\n", 15.35);
	
	printf("Fahrenheit\tCelsius\n");
	printf("%3d\t\t%8.3f\n", 	-30, 	(5.0/9.0)*(-30-32));
	printf("%3d\t\t%8.3f\n", 	-20, 	(5.0/9.0)*(-20-32));
	printf("%3d\t\t%8.3f\n", 	-10, 	(5.0/9.0)*(-10-32));
	printf("%3d\t\t%8.3f\n", 	0, 		(5.0/9.0)*(0-32));
	printf("%3d\t\t%8.3f\n", 	10, 	(5.0/9.0)*(10-32));
	//printf("%3d\t\t%8.2f\n", 	20, 	(5.0/9.0)*(20-32));
	printf("%3d\t\t%8.3f\n", 	30, 	(5.0/9.0)*(30-32));
	printf("%3d\t\t%8.3f\n", 	32, 	(5.0/9.0)*(32-32));
	// printf("%3d\t\t%08.3f\n", 	40, 	(5.0/9.0)*(40-32));
	printf("%3d\t\t%8.3f\n", 	40, 	(5.0/9.0)*(40-32));
	//printf("%3d\t\t%1.9f\n", 	50, 	(5.0/9.0)*(50-32));
	printf("%3d\t\t%8.3f\n", 	50, 	(5.0/9.0)*(50-32));
	printf("%3d\t\t%8.3f\n", 	60, 	(5.0/9.0)*(60-32));
	printf("%3d\t\t%8.3f\n", 	70, 	(5.0/9.0)*(70-32));
	printf("%3d\t\t%8.3f\n", 	80, 	(5.0/9.0)*(80-32));
	printf("%3d\t\t%8.3f\n", 	90, 	(5.0/9.0)*(90-32));
	printf("%3d\t\t%8.3f\n", 	100, 	(5.0/9.0)*(100-32));

	return 0;
}