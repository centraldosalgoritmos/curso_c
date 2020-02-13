#include <stdio.h>

int series(void);

int main(void) 
{
	for (int i = 0; i < 10; i++) 
	{
		printf("%d\n", series());
	}
	return 0;
}

int series(void) {
	static int code = 0;
	return ++code;
}


