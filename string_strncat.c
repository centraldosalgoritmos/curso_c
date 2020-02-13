#include <stdio.h>
#include <string.h>

int main(void) {

	char x[20] = "Steven Paul Jobs";
	char y[20] = "Jobs, ";
	
	printf("%s\n", x);
	
	strncat(y,x,5);
	
	printf("%s\n", y);

    return 0;
}








