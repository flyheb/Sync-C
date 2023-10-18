#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float in1; 
	int cont = 0; 
	printf("Digite a temperatura inicial do objeto: ");
	scanf("%f", &in1);
	while(in1 < 50){
		in1+= 3; 
		cont++;
	}
	printf("O tempo necessário para aquecer o objeto é: %d minutos", cont);
}
