#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float km, lit;
	printf("Digite a distãncia em km: ");
	scanf("%f", &km);
	printf("Digite a quantidade de combustível que foi gasta: ");
	scanf("%f", &lit);
	printf("A média por litro foi: %.2fKM/L", km / lit);
}
