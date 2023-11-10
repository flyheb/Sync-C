#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int num1, num2, som1, som2, cont1 = 1, cont2 = 1;
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	if(num1 < 0 || num2 < 0){
		printf("Os números digitados precisam ser positivos!");
	}else{
		while(cont1 < num1){
			if(num1 % cont1 == 0){
				som1 = som1 + cont1;			
			}
		cont1 ++;
		}
		while(cont2 < num2){
			if(num2 % cont2 == 0){
				som2 = som2 + cont2;			
			}
		cont2++; 
		}
	}
	if(som1 == num2 || som2 == num1){
		printf("Os números digitados são amigáveis!");
	}else{
		printf("Os números digitados não são amigáveis.");
	}
}


