#include <stdio.h>

int main(void)
{
	int x;

	x = 1;
	meu_loop:
		printf("%d\n", x);
		x++;
		if (x < 100) goto meu_loop;

	return 0;
}





