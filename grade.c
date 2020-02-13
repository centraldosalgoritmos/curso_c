#include <stdio.h>

int main(void) 
{
	unsigned short int n;
	printf("Informe a nota (0-100): ");
	scanf("%u", &n);
	
	if (n >= 90)
		printf("A\n");
	else if (n >= 80)
		printf("B\n");
	else if (n >= 70)
		printf("C\n");
	else if (n >= 60)
		printf("D\n");
	else
		printf("F\n");

	return 0;
}




