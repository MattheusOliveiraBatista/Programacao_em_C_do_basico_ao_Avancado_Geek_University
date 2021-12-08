#include <stdio.h>
#include <locale.h>



int main(){

	float num;
	setlocale(LC_ALL, "Portuguese");


	printf("-----------------------------------------------------------\n");
	printf("Faça um programa que leia um número real e o imprima.\n");
	printf("-----------------------------------------------------------\n");

	printf("Digite um número real: ");
	scanf("%f", &num);	
	printf("O número real digitado foi: %.2f", num);

	return 0;
}
