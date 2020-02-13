#include<stdio.h>

int prompt(void){
	printf("Digite um número: ");
	return 0;}

int leia(void){
	int n;
	scanf("%d",&n);
	return n;}

int main(void) {

	int t;
   	
   	for (prompt(), t=leia(); prompt())
   		printf("%d\n", t*t);

   	return 0;
}






