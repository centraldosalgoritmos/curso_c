#include<stdio.h>
#include<math.h>
 
int main()
{
    double a = 5.9;
    int b = (int) a;
    //parentese muda a prioridade
    int c = (int) (a * a);
    int d = (int) a * a;
    //funcao potencia
    int e = (int) pow(a,2);

    printf("%d %d %d %d\n", b, c, d, e);

    return 0;
}


