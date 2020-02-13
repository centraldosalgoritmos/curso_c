#include <stdio.h>

int fibonacci(void);

int main() {
	// exibe os 10 primeiros termos
    int n = 10;
    for (int i = 0; i < n; ++i)
    {
    	printf("%d\n", fibonacci());
    }}

int fibonacci(void) {
	static int  a = 0, b = 0;
	if (a == b) {
		b++;
		return b;
	} else {
		b += a;
		a = b-a;
		return b;
	}	
}







