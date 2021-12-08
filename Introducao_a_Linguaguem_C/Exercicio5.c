#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("-------------------------------------------------------------------------\n");
	printf("Leia uma temperatura em graus Celsius e apresente-a convertida em graus");
	printf("\nFahrenheit. A fórmula de conversão F = C*(9/5)+32, sendo F a temperatura");
	printf("\nem Fahrenheit e C a temperatura em Celsius.");
	printf("\n------------------------------------------------------------------------\n");

	float C, F;
	
	printf("\nDigite a temperatura em (°C): ");
	scanf("%f", &C);
	
	F = C* 9/5;
	F += 32;
	
	printf("Temperatura em °F: %.2f", F);

}
