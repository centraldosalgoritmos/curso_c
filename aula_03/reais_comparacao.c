#include <stdio.h>

int main() {

    float x = 0.1;
    double y = 0.1;
    
    if (x == 0.1)
        printf("float != double\n");
    
    if (x == 0.1f)
        printf("float == float\n");
        
    if (y == 1e-1)
        printf("notacao cientifica");
}





