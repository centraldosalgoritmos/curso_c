#include <stdio.h>

int main()
{
	// 5 caracteres, sendo 2 decimais
	printf("R$%5.2f\n",(15.3 / 3));

	printf("Fahrenheit\tCelsius\n");
	printf("%3d\t\t%6.3f\n", 0, (5.0/9.0)*(-32));
	printf("%3d\t\t%6.3f\n", 0, (5.0/9.0)*(-32));
	printf("%3d\t\t%6.3f\n", 20, (5.0/9.0)*(20-32));
	// complemente com zero
	printf("%3d\t\t%06.3f\n", 40, (5.0/9.0)*(40-32));
	printf("%3d\t\t%6.3f\n", 50, (5.0/9.0)*(50-32));

    return 0;
}

