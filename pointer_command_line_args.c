#include <stdio.h>

int main(int argc,char* argv[])
{
    int counter;
    printf("Programa: %s",argv[0]);
    if(argc==1)
        printf("\nSem argumentos extras");
    if(argc>=2)
    {
        printf("\nNumero de argumentos: %d",argc);
        printf("\n----Argumentos----");
        for(counter=0;counter<argc;counter++)
            printf("\nargv[%d]: %s",counter,argv[counter]);
    }
    return 0;
}



