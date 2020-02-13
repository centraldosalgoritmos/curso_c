#include <stdio.h>

int main(void) 
{
	char c;
	printf("Digite uma letra: ");
	scanf("%c", &c);
	
	switch (c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Vogal!\n");
			break;
		default:
			printf("Consoante!\n");
			break;
	}
	return 0;
}

