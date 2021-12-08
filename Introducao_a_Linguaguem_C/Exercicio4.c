#include <stdio.h>
#include <locale.h>

int main(){
	float num, quadrado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------\n");
	printf("Leia um número real e imprima o resultado do qadrado desse número.\n");
	printf("--------------------------------------------------------------------\n");

	printf("Digite um número real: ");
	scanf("%f", &num);	
	quadrado = num * num;
	
	printf("O quadrado do número real digitado foi: %.2f", quadrado);

	return 0;
}
