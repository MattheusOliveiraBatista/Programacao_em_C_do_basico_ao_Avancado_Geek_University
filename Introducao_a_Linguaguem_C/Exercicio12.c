#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia uma dist�ncia em milhas e apresente-a convertida e quil�metros.\n");
		printf("A f�rmulade convers�o �: K = 1.61*M, sendo K a dist�ncia em quil�metros\n");
		printf("e M em milhas.");
		printf("\n------------------------------------------------------------------------\n");
		
		float k, m;
		
		printf("Digite a dist�ncia em milhas : ");
		scanf("%f", &m);
				
		k = m * 1.61;
		printf("A dist�ncia convertida em quil�metros �: %.2f km", k);
		
}
