#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float l1, l2, l3; 

	printf("Identificador de tri�ngulos!!\n\n");
	printf("DIGITE SOMENTE N�MEROS POSITIVOS!!\n\n\n");

	printf("Digite o valor do lado um: ");
	scanf("%f", &l1);
	
	printf("Digite o valor do lado dois: ");
	scanf("%f", &l2);
	
	printf("Digite o valor do lado tr�s: ");
	scanf("%f", &l3);
	
	if (l1 <0 || l2 < 0 || l3 < 0){
		printf("Algum valor inserido � inv�lido.");
	} else{
	
		if (l1 != l2 && l1 != l3 && l2 != l3){
			printf("O tri�ngulo � um escaleno!");
		} else{
		
			if (l1 == l2 && l1 !=l3 || l2 == l3 &&  l2 != l1 || l1 == l3 && l1 != l2){
				printf("O tri�ngulo � um is�sceles!");
			} else{
				printf("O tri�ngulo � um equil�tero!");
			}
		}
	}
}

