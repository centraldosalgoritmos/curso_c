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






