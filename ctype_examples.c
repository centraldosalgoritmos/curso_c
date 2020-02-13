#include <stdio.h>
#include <ctype.h>

int main(void) {
    
	if (isdigit('8')) printf("8 eh digito\n");
	if (!isdigit('#')) printf("# nao eh digito\n");

	if (isalpha('A')) printf("A eh letra\n");
	if (isalpha('b')) printf("b eh letra\n");

	if (isxdigit('F')) printf("F eh hexa\n");
	if (isxdigit('f')) printf("f eh hexa\n");
	if (!isxdigit('$')) printf("$ nao eh hexa\n");

    return 0;
}











