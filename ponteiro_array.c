#include <stdio.h>

int main (void) {
    
    int  var[] = {1, 2, 3, 4, 5, 6};
    int i,j = 0, *ptr[3];

    for (i = 0; i < 6; i++) {
        if (i % 2)
            ptr[j++] = &var[i];
    }
    
    for (j = 0;j<3; j++)
        printf("valor de p[%d] = %d\n", j, *ptr[j] );
   
    return 0;
}


