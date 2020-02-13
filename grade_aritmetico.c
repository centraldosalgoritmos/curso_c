#include <stdio.h>

int main(void) 
{
	unsigned char n;

	printf("Informe a nota do aluno (0-100):");
	scanf("%d",&n);
	
	if (n < 60) 
	    printf("Grade F\n");
	else if (n >= 90)
	    printf("Grade A\n");
	else 
	    printf("Grade %c", 74 - (n / 10));
	
	return 0;
}



