#include <stdio.h>
#include <locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		
		printf("-------------------------------------------------------------------------\n");
		printf("Leia uma dist�ncia em quil�metros e apresente-a convertida e milhas.\n");
		printf("A f�rmulade convers�o �: M = K/1.61, sendo K a dist�ncia em quil�metros\n");
		printf("e M em milhas.");
		printf("\n------------------------------------------------------------------------\n");
		
		float k, m;
		
		printf("Digite a dist�ncia em quil�metros : ");
		scanf("%f", &k);
				
		m = k/1.61;
		
		printf("A dist�ncia convertida em milhas �: %.2f km", m);
		
}
