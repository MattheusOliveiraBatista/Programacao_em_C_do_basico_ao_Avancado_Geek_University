#include <stdio.h>
#include <locale.h>

#define pi 3,14159

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de \n");
		printf("coversão é:  R = G * pi / 180, sendo G o ângulo em graus e R em radianos e\n");
		printf("pi = 3.14");
		printf("\n------------------------------------------------------------------------\n");
		
		float R, G;
		
		printf("Digite um ângulo em gruas (°) : ");
		scanf("%f", &G);
				
		R = G*pi;
		R = R/180;
		
		printf("O ângulo em radianos é: %.2f rad", R);
		
}
