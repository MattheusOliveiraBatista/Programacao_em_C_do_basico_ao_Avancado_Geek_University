#include <stdio.h>
#include <locale.h>

int main(){
	float num, quadrado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("--------------------------------------------------------------------\n");
	printf("Leia um n�mero real e imprima o resultado do qadrado desse n�mero.\n");
	printf("--------------------------------------------------------------------\n");

	printf("Digite um n�mero real: ");
	scanf("%f", &num);	
	quadrado = num * num;
	
	printf("O quadrado do n�mero real digitado foi: %.2f", quadrado);

	return 0;
}
