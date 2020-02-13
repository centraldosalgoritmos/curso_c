#include <stdio.h>

int main()
{
	int a = 3, b = -8, c = 2;
	// 3 % -8 / 2
	printf("%d", a % b / c);
	printf("%d", a % b);   
	// -3 % 8
	a = -a, b = -b;
	printf("%d", a % b);
	b = -b;
	// -3 % -8
	printf("%d", a % b);
	
	return 0;
}

























