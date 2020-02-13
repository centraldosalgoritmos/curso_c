#include <stdio.h>
#include <stdbool.h>

int main() 
{
	bool a = true, b = false;
	printf("a and b\t %s\n", (a && b) ? "true":"false");
	printf("a or b\t %s\n", (a || b) ? "true":"false");
	printf("not a\t %s\n", !a ? "true":"false");
	printf("not b\t %s\n", !b ? "true":"false");
	printf("a xor b\t %s\n", (a || b) && !(a && b) ? "true":"false");
	printf("a -> b\t %s\n", (!a || b) ? "true":"false");

	return 0;
}






