#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("--------------------------------------------------------------------\n");
		printf("Leia uma temperatura em graus Fahrenheit e apresente-a convertida\n");
		printf("em graus Celsius. A fórmula de conversão é: C = 5 *(F-32)/9 \n");
		printf(", sendo F a temperatura Fahrenheit e C a temperatura em Celsius.\n");
		printf("--------------------------------------------------------------------\n");
		
		float C, F;
		
		printf("\n---------------------------------------------------\n");
		printf("Digite uma temperatura em Fahrenheit (°F): ");
		scanf("%f", &F);

		C = 5 *(F-32) /9;
		
		printf("A temperatura em Celsius é: %.2f °C", C);
		printf("\n---------------------------------------------------\n");

}
