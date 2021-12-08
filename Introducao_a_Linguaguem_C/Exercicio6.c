#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("--------------------------------------------------------------------\n");
		printf("Leia uma temperatura em graus Celsius e apresente-a convertida\n");
		printf("em graus Fahrenheit. A fórmula de conversão é: F = C* (9/5) + 32\n");
		printf(", sendo F a temperatura Fahrenheit e C a temperatura em Celsius.\n");
		printf("--------------------------------------------------------------------\n");
		
		float C, F;
		
		printf("\n---------------------------------------------------\n");
		printf("Digite uma temperatura em Celsius (°C): ");
		scanf("%f", &C);

		F = (C*9) /5;
		F += 32;
		printf("A temperatura em Fahrenheit é: %.2f °F", F);
		printf("\n---------------------------------------------------\n");

}
