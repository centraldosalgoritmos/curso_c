#include<stdio.h>
 
int main(void)
{
   	unsigned short int x;
   
   	for (x = 100; x > 0; --x)
   	{
   		printf("%3d%8ld\n", x, (x*x*x));	
   	}
   
   	return 0;
}





