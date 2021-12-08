#include <stdio.h>
#include <locale.h>

#define pi 3,14159

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de \n");
		printf("coversão é:  G = R *180/ pi, sendo G o ângulo em graus e R em radianos e\n");
		printf("pi = 3.14");
		printf("\n------------------------------------------------------------------------\n");
		
		float R, G;
		
		printf("Digite um ângulo em radianos (rad) : ");
		scanf("%f", &R);
				
		G = (R*180)/pi;
				
		printf("O ângulo em graus (°) é: %.2f rad", G);
		
}
