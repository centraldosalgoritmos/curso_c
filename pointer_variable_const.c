#include <stdio.h>

int main(void)
{
    const int x = 5;
    int *p;
    
    p = &x; 
    printf("%d ", x);
    *p = 11;
    //	warning: initialization discards 'const' qualifier 
	//	from pointer target type
    printf("%d", x);

    return 0;
}



