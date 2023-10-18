#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float in1; 
	int cont = 0; 
	printf("Digite a temperatura inicial do objeto: ");
	scanf("%f", &in1);
	while(in1 > 10){
		in1-= 3; 
		cont++;
	}
	printf("O tempo necessário para resfriar o objeto é: %d minutos", cont);
}
