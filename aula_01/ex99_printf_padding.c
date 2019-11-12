#include <stdio.h>

int main()
{
	int number = 13;
	
	printf("%5d \n", number);
	printf("%-5d \n", number);
	printf("%05d \n", number);
	printf("%#x \n", number);
	printf("---%*d---\n", 6, number);

	return 0;
}

























