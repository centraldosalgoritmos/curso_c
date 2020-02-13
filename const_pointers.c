#include <stdio.h>

int main(void) 
{
	int i = 42;
	int j = 28;

	const int *pc = &i; //Also: "int const *pc"
	*pc = 41; //Wrong
	pc = &j;

	int *const cp = &i;
	*cp = 41;
	cp = &j; //Wrong

	const int *const cpc = &i;
	*cpc = 41; //Wrong
	cpc = &j; //Wrong
	
	return 0;
}

