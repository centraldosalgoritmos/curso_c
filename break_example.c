#include <stdio.h>

int main(void)
{
    unsigned int n, div;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    
    if (n > 1) {
        for(div=(n/2);;div--) 
		    if ((n % div == 0) || (div < 2))
			    break;
		
		if (div == 1) printf("%d eh primo\n",n);
		else printf("%d eh o maior divisor de %d\n", div, n);
    }
    else 
        printf("%d nao eh primo \n", n);

    return 0;
}


