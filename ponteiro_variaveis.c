#include <stdio.h>

int main (void) {

	int v1 = 1, v2 = 3, v3 = 5;
    int *p[3];
    
    p[0] = &v1;
    p[1] = &v2;
    p[2] = &v3;
   
   	for (int i = 0; i < 3; i++) {
      	printf("p[%d] = %d\n", i, *p[i] );
   	}
   
   	return 0;
}


