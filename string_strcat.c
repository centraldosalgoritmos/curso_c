#include <stdio.h>
#include <string.h>

int main(void) {

	char x[] = "Programação ";
	char y[] = "em ";
	char z[] = "C!";
	char s[20];
	
	strcat(x,y);
	strcat(x,z);
	
	printf("%s\n", x);

    return 0;
}









