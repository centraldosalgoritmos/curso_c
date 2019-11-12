#include<stdio.h>
 
int main()
{
    double x = 1.2;
    char c = 'a';
    int z;
    
    // conversao explicita de double para int [trunc]
    int sum = (int)x + 31;
    // subtracao do valor ascii entre char
    z = (int)c - sum;
 
    printf("sum = %d\n", sum);
    printf("char = %c", z);
 
    return 0;
}


