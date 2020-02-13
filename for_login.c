#include <stdio.h>
#include <string.h>

int main(void)
{
    int x;
    char pwd[200];
    
    for (x=0; x < 3 && strcmp(pwd, "12345"); ++x) {
        printf("Digite a senha (%d chances): \n", 3-x);
        gets(pwd);
    }

    if (x==3) printf("Falha no login\n");
    else printf("Usuário logado!\n");
  
    return 0;
}





