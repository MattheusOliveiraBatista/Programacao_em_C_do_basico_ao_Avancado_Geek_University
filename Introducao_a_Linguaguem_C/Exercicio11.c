#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("--------------------------------------------------------------------\n");
		printf("Leia uma velocidade em m/s (metros por segundo) e apresente-a\n");
		printf("convertida em km/h (quilômetros por hora). A fórmulade conversão é:\n");
		printf("M = K/3.6, sendo K a velocidade em km/h e M em m/s.");
		printf("\n--------------------------------------------------------------------\n");
		
		float k, m;
		
		printf("Digite a velocidade em m/s : ");
		scanf("%f", &m);
				
		k = m * 3.6;
		printf("A velocidade em km/h é: %.2f", k);
		
}
