#include <stdio.h>
#include <locale.h>


int main(){

	int num;
	setlocale(LC_ALL, "Portuguese");

	printf("-----------------------------------------------------------\n");
	printf("Fa�a um programa que leia um n�mero inteiro e o imprima.\n");
	printf("-----------------------------------------------------------\n");


	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);	
	printf("O n�mero inteiro digitado foi: %d", num);
}
