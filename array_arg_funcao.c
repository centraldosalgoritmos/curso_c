#include <stdio.h>
#define SIZE 5

int soma(const int n[], int size) {
    int soma = 0;
	for (int i = 0; i < size; i++)
	    soma += n [i];
	return soma;
}

int main(void) {
    int n[SIZE] = {1, 2, 3, 4, 5};
    printf("%d\n", soma(n,SIZE));
    return 0;
}













