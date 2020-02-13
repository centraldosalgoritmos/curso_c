#include<stdio.h>
#include<conio.h>//gotoxy()
#include<string.h>//strlen()

int main(void)
{
   	unsigned short int i, j, line = 2;
   	char msg[] = "Testando multiplos contadores.";
   	// j recebe o tamanho de msg
   	for (i=1, j=strlen(msg); i<j; i++, j--)
   	{
   		gotoxy(i, line); //posiciona o cursor em (x,y)
   		printf("%c", msg[i-1]);//esquerda -> direita
   		gotoxy(j, line); 
   		printf("%c", msg[j-1]);//direita -> esquerda
   		getchar();
   	}
   	return 0;
}






