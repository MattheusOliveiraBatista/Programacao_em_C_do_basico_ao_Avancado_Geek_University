#include <stdio.h>
#include <locale.h>



int main(){

	int num_1, num_2, num_3, soma;
	setlocale(LC_ALL, "Portuguese");

	printf("--------------------------------------------------------------------\n");
	printf("Peça ao usuário para digitar três valores e imprima a soma deles.\n");
	printf("--------------------------------------------------------------------\n");

	printf("Digite um número inteiro: ");
	scanf("%d", &num_1);	
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num_2);	
	
	printf("Digite um número inteiro: ");
	scanf("%d", &num_3);	
	
	soma = num_1 + num_2 + num_3;
	
	
	printf("A soma dos três números foi: %d", soma);
}
