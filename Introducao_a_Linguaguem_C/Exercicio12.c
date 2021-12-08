#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia uma distância em milhas e apresente-a convertida e quilômetros.\n");
		printf("A fórmulade conversão é: K = 1.61*M, sendo K a distância em quilômetros\n");
		printf("e M em milhas.");
		printf("\n------------------------------------------------------------------------\n");
		
		float k, m;
		
		printf("Digite a distância em milhas : ");
		scanf("%f", &m);
				
		k = m * 1.61;
		printf("A distância convertida em quilômetros é: %.2f km", k);
		
}
