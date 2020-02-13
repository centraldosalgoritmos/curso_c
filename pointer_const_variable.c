#include <stdio.h>

int main(void)
{
    int x = 5, y = 6;
    const int *p = &x;
    
    printf("%d", *p);

    p = &y;
    printf("\n%d", *p);
    
    //*p = 10; 
    // error: assignment of read-only location '*p'

    return 0;
}




