#include <stdio.h>

int main()
{
    unsigned int numero;
    unsigned long int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero)
    {
        fatorial *= numero--;  // factorial = factorial*number;
    }

    printf("Fatorial= %lu", fatorial);
    return 0;
}




