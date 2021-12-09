#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("------------------------------------------------------------------------------------\n");
	printf("Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.\n");
	printf("A fórmula de conversão é: P = C/2,54, sendo C o comprimento em centímetros e P o \n");
	printf("comprimento em polegadas.\n");
 	printf("------------------------------------------------------------------------------------\n");

	float Cm, Polegadas;
	
	printf("Digite o valor em cm: ");
	scanf("%f", &Cm);
	
	Polegadas = Cm/2.54;
	
	printf("O valor digitado em polegadas vale: %.3f", Polegadas);
	
}
