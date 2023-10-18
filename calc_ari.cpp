#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	float nota1;
	float nota2;
	float nota3; 
	printf("Bem-vindo ao calcula média aritimética!!\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	float mediaf = (nota1 + nota2 + nota3)/3;
	printf("A média final é: %.1f", mediaf);	
}
