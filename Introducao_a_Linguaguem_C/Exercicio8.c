#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("--------------------------------------------------------------------\n");
		printf("Leia uma temperatura em graus Kelvin e apresente-a convertida\n");
		printf("em graus Celsius. A fórmula de conversão é: C = K -273.15 \n");
		printf(", sendo K a temperatura Kelvin e C a temperatura em Celsius.\n");
		printf("--------------------------------------------------------------------\n");
		
		float C, K;
		
		printf("\n---------------------------------------------------\n");
		printf("Digite uma temperatura em Kelvin: ");
		scanf("%f", &K);

		C = K -273.15;
		
		printf("A temperatura em Celsius é: %.2f °C", C);
		printf("\n---------------------------------------------------\n");

}
