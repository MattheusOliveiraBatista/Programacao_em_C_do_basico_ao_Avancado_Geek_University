#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("------------------------------------------------------------------------------------\n");
	printf("Leia um valor de volume em metros c�bicos m� e apresente-o convertido em litros.\n");
	printf("A f�rmula de convers�o �: L = 1000 x M, sendo L o volume em litros e M o volume \n");
	printf("em metros c�bicos.\n");
 	printf("------------------------------------------------------------------------------------\n");

	float L, M;
	
	printf("Digite o valor em metros c�bicos (m�): ");
	scanf("%f", &M);
	
	L = M * 1000;
	
	printf("O valor digitado em litros vale: %.3f L", L);
	
}
