#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float km, lit;
	printf("Digite a dist�ncia em km: ");
	scanf("%f", &km);
	printf("Digite a quantidade de combust�vel que foi gasta: ");
	scanf("%f", &lit);
	printf("A m�dia por litro foi: %.2fKM/L", km / lit);
}
