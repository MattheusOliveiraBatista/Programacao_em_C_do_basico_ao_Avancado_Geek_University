#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("--------------------------------------------------------------------\n");
		printf("Leia uma velocidade em km/h (quil�metros por hora) e apresente-a\n");
		printf("convertida em m/s (metros por segundo). A f�rmulade convers�o �:\n");
		printf("M = K/3.6, sendo K a velocidade em km/h e M em m/s.");
		printf("\n--------------------------------------------------------------------\n");
		
		float k, m;
		
		printf("Digite a velocidade em km/h: ");
		scanf("%f", &k);
				
		m = k/3.6;
		printf("A velocidade em m/s �: %.2f", m);
		
}
