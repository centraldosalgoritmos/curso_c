#include<stdio.h>

int main()
{
	int x = 1, y = 0, z = 0;
    printf("%d %d %d\n", x, y, z);
    {
        int x = 0;
        int y = 1;
        printf("%d %d %d\n", x, y, z);
        {
            int y = 0;
            int z = 1;
            printf("%d %d %d\n", x, y, z);
        }
    }
    return 0;
}

