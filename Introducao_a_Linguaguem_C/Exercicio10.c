#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("--------------------------------------------------------------------\n");
		printf("Leia uma velocidade em km/h (quilômetros por hora) e apresente-a\n");
		printf("convertida em m/s (metros por segundo). A fórmulade conversão é:\n");
		printf("M = K/3.6, sendo K a velocidade em km/h e M em m/s.");
		printf("\n--------------------------------------------------------------------\n");
		
		float k, m;
		
		printf("Digite a velocidade em km/h: ");
		scanf("%f", &k);
				
		m = k/3.6;
		printf("A velocidade em m/s é: %.2f", m);
		
}
