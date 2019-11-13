#include <stdio.h>

int main() 
{

    printf("char %d bits\n", sizeof(char) * 8);
    // o tipo padrão é int, logo podemos omiti-lo ...
    printf("short int %d bits\n", sizeof(short) * 8);
    printf("long int %d bits\n", sizeof(long) * 8);
    printf("float %d bits\n", sizeof(float) * 8);
    printf("double %d bits\n", sizeof(double) * 8);
    printf("long double %d bits\n", sizeof(long double)*8);

    return 0;
}




