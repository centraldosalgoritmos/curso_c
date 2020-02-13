#include <stdio.h>

void selectPTBooks(char *books[], char *select[]) {
    select[0] = &books[0];
    select[1] = &books[1];
    select[2] = &books[6];
 }
void selectENBooks(char *books[], char *select[]) {
    select[0] = &books[2];
    select[1] = &books[3];
    select[2] = &books[4];
    select[3] = &books[5];
 }

int main(void) {
    char *books[] = {
            "C - Como Programar",
            "C - Completo e Total",
            "C - Traps and pitfalls",
            "The C programming language",
            "Understand and using C pointers",
            "Algorithms in C",
            "Projetos de Algotismos com Imp em C"
        };
    char **ptBooks[3];
    char **enBooks[4];
    
    selectPTBooks(books,ptBooks);
    selectENBooks(books,enBooks);

    printf("PT Books\n");
    for (int i = 0; i < 3; i++)
        printf("%s\n",*ptBooks[i]);
    printf("\n");
    printf("EN Books\n");
    for (int i = 0; i < 4; i++)
        printf("%s\n",*enBooks[i]);
    
    return 0;
}









