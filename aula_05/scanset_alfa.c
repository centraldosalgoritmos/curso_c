#include<stdio.h>

int main(void)
{
	char str[10];
  
	printf ("Informe dígitos e letras(MAX 10): ");
	
	scanf ("%10[a-z0-9]", str);
	
	printf ("\n%s", str);

 	return 0;
 }








