#include <stdio.h>
#include <locale.h>


int main(){

	int num;
	setlocale(LC_ALL, "Portuguese");

	printf("-----------------------------------------------------------\n");
	printf("Faça um programa que leia um número inteiro e o imprima.\n");
	printf("-----------------------------------------------------------\n");


	printf("Digite um número inteiro: ");
	scanf("%d", &num);	
	printf("O número inteiro digitado foi: %d", num);
}
