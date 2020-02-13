#include <stdio.h>
int main()
{	
	char c;
    do {
    	printf("1. Verificar Ortografia\n");
    	printf("2. Corrigir Erros Ortográficos\n");
    	printf("3. Mostrar Erros Ortográficos\n");
    	printf("Outra tecla para sair.\n");
    	scanf(" %c",&c);
    	switch (c) {
    		case '1': { printf("Verificar...\n"); break; }
    		case '2': { printf("Corrigir...\n"); break; }
    		case '3': { printf("Mostrar...\n"); break; }
    	}
    } while ((c>48) && (c<52));
    return 0;
}



