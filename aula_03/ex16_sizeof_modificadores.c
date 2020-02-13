/*
    @author marcosmapl
    @email marcos.lima@icomp.ufam.edu.br
    @company Devcated
    @since Nov 20, 2019

    Exemplificando o tamanhho em bits de cada tipo modificado.
    'short','long','signed','unsigned'. 
*/
#include <stdio.h>

int main() 
{

    printf("signed char: %lu bits\n", sizeof(signed char) * 8);
    printf("unsigned char: %lu bits\n", sizeof(unsigned char) * 8);

    printf("signed short: %lu bits\n", sizeof(signed short int) * 8);
    //printf("signed short: %lu bits\n", sizeof(signed short) * 8);
    printf("unsigned short: %lu bits\n", sizeof(unsigned short int) * 8);
    //printf("unsigned short: %lu bits\n", sizeof(unsigned short) * 8);

    printf("signed int: %lu bits\n", sizeof(signed int) * 8);
    //printf("signed int: %lu bits\n", sizeof(signed) * 8);
    printf("unsigned int: %lu bits\n", sizeof(unsigned int) * 8);
    //printf("unsigned int: %lu bits\n", sizeof(unsigned) * 8);

    printf("signed long int: %lu bits\n", sizeof(signed long int) * 8);
    //printf("signed long int: %lu bits\n", sizeof(signed long) * 8);
    printf("unsigned long int: %lu bits\n", sizeof(unsigned long int) * 8);
    //printf("unsigned long int: %lu bits\n", sizeof(unsigned long) * 8);

    printf("signed long long int: %lu bits\n", sizeof(signed long long int) * 8);
    //printf("signed long long int: %lu bits\n", sizeof(signed long long) * 8);
    printf("unsigned long long int: %lu bits\n", sizeof(unsigned long long int) * 8);
    //printf("unsigned long long int: %lu bits\n", sizeof(unsigned long long) * 8);

    printf("long double: %lu bits\n", sizeof(long double) * 8);
    printf("long double: %lu bits\n", sizeof(long double) * 8);

    return 0;
}  