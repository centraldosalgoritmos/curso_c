#include <stdio.h>

int main()
{
	int mesas, cadeiras;

	// exemplo da entrega de móveis
	// 10 072
	scanf("%d %d", &mesas, &cadeiras);

	printf("Octal:%o %o\n", mesas, cadeiras);
	printf("Hexa:%d %d\n", mesas, cadeiras);
	printf("Decimal:%d %d\n", mesas, cadeiras);

	// explicar que o espaço consome o '\n' do scanf acima
	scanf(" %i %i", &mesas, &cadeiras);

	printf("Octal:%o %o\n", mesas, cadeiras);
	printf("Hexa:%d %d\n", mesas, cadeiras);
	printf("Decimal:%d %d\n", mesas, cadeiras);

	return 0;
}