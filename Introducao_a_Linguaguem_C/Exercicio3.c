#include <stdio.h>
#include <locale.h>



int main(){

	int num_1, num_2, num_3, soma;
	setlocale(LC_ALL, "Portuguese");

	printf("--------------------------------------------------------------------\n");
	printf("Pe�a ao usu�rio para digitar tr�s valores e imprima a soma deles.\n");
	printf("--------------------------------------------------------------------\n");

	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num_1);	
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num_2);	
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num_3);	
	
	soma = num_1 + num_2 + num_3;
	
	
	printf("A soma dos tr�s n�meros foi: %d", soma);
}
