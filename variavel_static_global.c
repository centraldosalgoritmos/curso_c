#include <stdio.h>

static int codigo_prod;
int codigo_prod(void);
void codigo_start(int seed);

int main() 
{
	// esse program gera codigos para produtos
	// iniciando com o numero 5
    codigo_start(5);
    for (int i = 10;i--;)
    {
    	printf("%d\n", codigo_prod());
    }
}

void codigo_start(int seed) 
{
	codigo_prod = seed;
}

int codigo_prod(void) 
{
	return codigo_prod++;
}
