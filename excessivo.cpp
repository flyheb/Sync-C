#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int num, som;
	int cont = 1;
	printf("Digite um número: ");
	scanf("%d", &num);
	while(cont < num){
		if(num % cont == 0){
			som = som + cont;			
		}
	cont ++;
	}
	printf("%d", som);
}
