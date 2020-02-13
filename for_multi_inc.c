#include <stdio.h>

int main(void)
{
    int x,y;
    
    printf("Múltiplos de 2 e 3.\n");
    
    for (x=0, y=0; y-x <= 10; x+=2, y+=3) 
    {
        printf("%2d %2d\n",x,y);    
    }

    return 0;
}




