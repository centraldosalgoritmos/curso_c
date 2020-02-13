#include <stdio.h>

int main(void)
{
    int x = 5, y = 6;
    int *const p = &x;
    
    printf("%d", *p);
    *p = 10;
    printf("\n%d", x);
    
    //p = &y; 
    // error: assignment of read-only variable 'p'

    return 0;
}


