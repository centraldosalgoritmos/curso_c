#include <stdio.h>
int main(void)
{
   	int x = 6;
   	switch (x)
   	{
   	    int j = 15; //é declarada, mas nao atribuida
       	default: {
       	    printf("Default %d\n", j);
       	    j = 5; // j é reconhecida
       	    printf("Default %d\n", j);
           	break;
       	}
       		
   }
   return 0;
}


