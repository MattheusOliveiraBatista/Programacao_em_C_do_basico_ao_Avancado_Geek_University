#include <stdio.h>
#include <locale.h>

#define pi 3,14159

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia um �ngulo em graus e apresente-o convertido em radianos. A f�rmula de \n");
		printf("covers�o �:  R = G * pi / 180, sendo G o �ngulo em graus e R em radianos e\n");
		printf("pi = 3.14");
		printf("\n------------------------------------------------------------------------\n");
		
		float R, G;
		
		printf("Digite um �ngulo em gruas (�) : ");
		scanf("%f", &G);
				
		R = G*pi;
		R = R/180;
		
		printf("O �ngulo em radianos �: %.2f rad", R);
		
}
