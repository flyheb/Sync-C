#include <stdio.h>
#include <locale.h>

int maior(int val1, int val2){
	if(val1 > val2){
		printf("\n\nO primeiro número digitado é maior!");
	}else if(val1 == val2){
		printf("\n\nOs números digitados são iguais!");
	}else{
		printf("\n\nO segundo número digitado é maior!");
	}
}

int somaParImpar(int val1, int val2){
	if(((val1 + val2) % 2) == 0){
		printf("\n\nA soma é par!\n");
		return 1;
	}else{
		printf("\n\nA soma é ímpar!\n");
		return 0;
	}
}

int exibeNumeros(int val1, int val2){
	int i = 1, val3;
	if (val1 == val2){
		return val1;
	}else if(val1 > val2){
		val3 = val1 - val2;
		while(i < val3){
			printf("%d  ", (val1 - i));
			i++;
		}
	}else{
		val3 = val2 - val1;
		while(i < val3){
			printf("%d  ", (val2 - i));
			i++;
		}
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int val1, val2;
	printf("Digite o primeiro valor: ");
	scanf("%d", &val1);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &val2);
	maior(val1, val2);
	somaParImpar(val1, val2);
	printf("\nNúmeros que existem entre %d e %d:\n", val1, val2);
	exibeNumeros(val1, val2);
}
