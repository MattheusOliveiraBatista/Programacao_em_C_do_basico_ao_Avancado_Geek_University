#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("--------------------------------------------------------------------\n");
		printf("Leia uma temperatura em graus Celsius e apresente-a convertida\n");
		printf("em graus Kelvin. A fórmula de conversão é: C = K -273.15 \n");
		printf(", sendo K a temperatura Kelvin e C a temperatura em Celsius.\n");
		printf("--------------------------------------------------------------------\n");
		
		float C, K;
		
		printf("\n---------------------------------------------------\n");
		printf("Digite uma temperatura em Celsius (°C): ");
		scanf("%f", &C);

		K = C + 273.15;
		
		printf("A temperatura em Kelvin é: %.2f ", K);
		printf("\n---------------------------------------------------\n");

}
