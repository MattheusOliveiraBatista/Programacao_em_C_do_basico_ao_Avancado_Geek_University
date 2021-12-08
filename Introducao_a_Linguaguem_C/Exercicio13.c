#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia uma distância em quilômetros e apresente-a convertida e milhas.\n");
		printf("A fórmulade conversão é: M = K/1.61, sendo K a distância em quilômetros\n");
		printf("e M em milhas.");
		printf("\n------------------------------------------------------------------------\n");
		
		float k, m;
		
		printf("Digite a distância em quilômetros : ");
		scanf("%f", &k);
				
		m = k/1.61;
		
		printf("A distância convertida em milhas é: %.2f km", m);
		
}
