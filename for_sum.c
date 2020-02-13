#include <stdio.h>

int main(void)
{
    int x, soma = 0;
    
    //soma dos 100 primeiros ímpares ...
    for (x=1; x <= 100; soma += x,x+=2) 
    {
        printf("%d\n", x);    
    }
    printf("%d\n", soma);    
    return 0;
}




