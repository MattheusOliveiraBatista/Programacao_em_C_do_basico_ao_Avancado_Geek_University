#include <stdio.h>
#include <locale.h>



int main(){

	float num;
	setlocale(LC_ALL, "Portuguese");


	printf("-----------------------------------------------------------\n");
	printf("Fa�a um programa que leia um n�mero real e o imprima.\n");
	printf("-----------------------------------------------------------\n");

	printf("Digite um n�mero real: ");
	scanf("%f", &num);	
	printf("O n�mero real digitado foi: %.2f", num);

	return 0;
}
