#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("------------------------------------------------------------------------------------\n");
	printf("Leia um valor de comprimento em polegadas e apresente-o convertido em cent�metros.\n");
	printf("A f�rmula de convers�o �: C = P * 2,54, sendo C o comprimento em cent�metros e P o \n");
	printf("comprimento em polegadas.\n");
 	printf("------------------------------------------------------------------------------------\n");

	float Cm, Polegadas;
	
	printf("Digite o valor em polegadas (in): ");
	scanf("%f", &Polegadas);
	
	Cm = Polegadas * 2.54;
	
	printf("O valor digitado em cent�metros vale: %.3f", Cm);
	
}
