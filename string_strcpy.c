#include <stdio.h>
#include <string.h>

int main(void) {

	char x[] = "Ada Lovelace";
	char y[15];
	char z[15];
	
	printf("x: %s\n", x);
	printf("y: %s\n", strcpy(y,x));
	printf("z: %s\n", strncpy(z,x,3));

    return 0;
}









