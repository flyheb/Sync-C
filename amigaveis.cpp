#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int num1, num2, som1, som2, cont1 = 1, cont2 = 1;
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2);
	if(num1 < 0 || num2 < 0){
		printf("Os n�meros digitados precisam ser positivos!");
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
		printf("Os n�meros digitados s�o amig�veis!");
	}else{
		printf("Os n�meros digitados n�o s�o amig�veis.");
	}
}


