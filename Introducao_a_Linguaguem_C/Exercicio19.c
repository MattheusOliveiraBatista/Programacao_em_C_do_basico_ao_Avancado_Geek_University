#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("-----------------------------------------------------------------------------------\n");
	printf("Leia um valor de volume em  litros e apresente-o convertido em metros c�bicos m�.\n");
	printf("A f�rmula de convers�o �: M = L/ 1000  , sendo L o volume em litros e M o volume \n");
	printf("em metros c�bicos.\n");
 	printf("-----------------------------------------------------------------------------------\n");
 	
 	
 	float L, M;
	
	printf("Digite o valor em Litros (L): ");
	scanf("%f", &L);
	
	M = L / 1000;
	
	printf("O valor digitado em metros c�bicos vale: %.3f m�", M);
 	
}
