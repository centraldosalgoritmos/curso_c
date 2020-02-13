#include <stdio.h>

#define PI 3.141592654
#define MAX(A,B) ((A)>(B)?(A):(B))
#define PERCENT(D) (D * 100)
#define DPRINT(D) printf(#D " = %g\n",D)
#define JOIN(A,B) (A ## B)

int main(void) 
{
	const unsigned int a1=3;
	const unsigned int i = JOIN(a,1);
	printf("%u %g\n",i, MAX(PI,3.14));
	DPRINT(MAX(PERCENT(0.32+0.16),PERCENT(0.15+0.48)));

	return 0;
}


