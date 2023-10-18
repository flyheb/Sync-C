#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float l1, l2, l3; 

	printf("Identificador de triângulos!!\n\n");
	printf("DIGITE SOMENTE NÚMEROS POSITIVOS!!\n\n\n");

	printf("Digite o valor do lado um: ");
	scanf("%f", &l1);
	
	printf("Digite o valor do lado dois: ");
	scanf("%f", &l2);
	
	printf("Digite o valor do lado três: ");
	scanf("%f", &l3);
	
	if (l1 <0 || l2 < 0 || l3 < 0){
		printf("Algum valor inserido é inválido.");
	} else{
	
		if (l1 != l2 && l1 != l3 && l2 != l3){
			printf("O triângulo é um escaleno!");
		} else{
		
			if (l1 == l2 && l1 !=l3 || l2 == l3 &&  l2 != l1 || l1 == l3 && l1 != l2){
				printf("O triângulo é um isósceles!");
			} else{
				printf("O triângulo é um equilátero!");
			}
		}
	}
}

