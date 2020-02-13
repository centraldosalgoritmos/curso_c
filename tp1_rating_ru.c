#include <stdio.h>
#include <time.h>
#define RESP_SIZE 100
#define FREQ_SIZE 11

int main(void)
{
    int nota;
    // inicializa todo array com zeros
    int freq[FREQ_SIZE] = {0};
    int notas[RESP_SIZE];

	// leitura das notas (simulação)
    srand(time(NULL));
    for(int x = 0; x < RESP_SIZE; x++)
    	notas[x] = (rand() % 10) + 1;

    // mapeamento das notas para vetor de frequencia
    for (nota = 0; nota < RESP_SIZE; nota++)
    	++freq[ notas[nota] ];

    // relatorio
    printf("%s%13s\n","Notas","Frequencia");
    for (nota = 1; nota < FREQ_SIZE; nota++)
    	printf("%2d%9d\n", nota, freq[nota]);
        
    return 0;
}