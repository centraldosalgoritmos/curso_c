#include <stdio.h>

int main()
{
    int j = 10, t = 0, i = t;
    
    for ((j--,i = 0); (t++,i<10); i++) 
    {
        printf("%d %d %d\n",i, j, t);
    }

    return 0;
}































