#include <stdio.h>

int main(void) 
{
	unsigned short int n;
	printf("Informe a nota (0-100): ");
	scanf("%u", &n);
	
	if (n < 60)
		printf("F\n");
	else if (n < 70)
		printf("D\n");
	else if (n < 80)
		printf("C\n");
	else if (n < 90)
		printf("B\n");
	else
		printf("A\n");

	return 0;
}




