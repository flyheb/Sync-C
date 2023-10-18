#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float mesada, maior, menor, soma;
	int medcem;
	
	for (int i = 1; i <= 3; i++){
		printf("Insira a mesada %d: ", i);
		scanf("%f", &mesada);
		soma = soma + mesada;
		if(i == 1){
			maior = mesada;
			menor = mesada;
		} else if(mesada > maior){
			maior = mesada;
		} else if(mesada < menor){
			menor = mesada;
		}
		if(mesada > 100){
			medcem++;
		}
	}
	
	system("cls");
	printf("A maior mesada foi: R$%.2f", maior);
	printf("\nA menor mesada foi: R$%.2f", menor);
	printf("\nA soma das mesadas foi: R$%.2f", soma);
	printf("\nA média das mesadas foi: R$%.2f", soma / 3);
	printf("\nQuantos ganham mais do que R$100: %d", medcem);
	
}
