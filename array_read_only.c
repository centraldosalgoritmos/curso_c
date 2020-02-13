#include <stdio.h>
#define SIZE 3

void modificar(const int n[]) 
{
	int x = n[0] + n[1]; //pode ler os valores
    n[2] = x; //erro
}

int main(void) 
{
    int n[SIZE] = {1, 2, 3};

    modificar(n);

    return 0;
}









