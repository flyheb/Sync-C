#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float nota, med, maior, menor;
	int mmsete;
	for(int i = 1; i <= 10; i++){
		printf("Digite a %d nota final: ", i);
		scanf("%f", &nota);
		med = med + nota;
		if(nota >= 7){
			mmsete = mmsete + 1;
		}
		if(i == 1){
			maior = nota;
			menor = nota;
		}else if(nota > maior){
			maior = nota; 
		}else if(nota < menor){
			menor = nota;
		}
	}
	system("cls");
	printf("\nA menor nota foi: %.1f", menor);
	printf("\nA maior nota foi: %.1f", maior);
	printf("\nQuantidade de alunos com média 7 ou mais: %d", mmsete);
	printf("\nMédia final de todos os alunos foi: %.1f", med / 10);
}

