#include <stdio.h>

void menu(void) {
	char c;

	c = getchar(); /*Lê 1 caractere do teclado. */
	switch (c) {
		case '1':
			printf("Checando erros...\n");
			break;
		case '2':
			printf("Corrigindo erros...\n");
			break;
		case '3':
			printf("Exibindo erros...\n");
			break;
		default:
			printf("Saindo...\n");
	}}

void imprimirOpcoes(void) {
	printf("1. Checar Ortografia\n");
	printf("2. Corrigir Erros Ortográficos\n");
	printf("3. Mostrar Erros Ortográficos\n");
	printf("Outra tecla para sair\n");
	printf("Opção: ");
}

int main(void) 
{
	imprimirOpcoes();
	menu();
	return 0;
}





