#include <stdio.h>
#include <locale.h>

#define pi 3,14159

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia um �ngulo em radianos e apresente-o convertido em graus. A f�rmula de \n");
		printf("covers�o �:  G = R *180/ pi, sendo G o �ngulo em graus e R em radianos e\n");
		printf("pi = 3.14");
		printf("\n------------------------------------------------------------------------\n");
		
		float R, G;
		
		printf("Digite um �ngulo em radianos (rad) : ");
		scanf("%f", &R);
				
		G = (R*180)/pi;
				
		printf("O �ngulo em graus (�) �: %.2f rad", G);
		
}
