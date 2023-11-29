#include <stdio.h>
#include <locale.h>

int calculaResto(int val1, int val2){
	return (val1 % val2);
}

int verifNumero(int val1, int val2){
	if (val1 - val2 > 0){
		return 1; 
	} else if(val1 - val2 == 0){
		return 0;
	} else{
		return -1;
	}
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int val1, val2;
	printf("Digite o valor 1: ");
	scanf("%d", &val1);
	printf("\nDigite o valor 2: ");
	scanf("%d", &val2);
	printf("\nResto: %d\n", calculaResto(val1, val2));
	if (verifNumero(val1, val2) == 1){
		printf("\nResultado da subtração é Positivo!");
	} else if (verifNumero(val1, val2) == 0){
		printf("\nResultado da subtração é Zero!");
	}else{
		printf("\nResultado da subtração é Negativo!");
	}
}
