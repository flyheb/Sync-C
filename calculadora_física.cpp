#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int opr; 
	printf("Calculadora para elétrica!!"); 
	printf("\n\n (--) para valores que não serão utilizados.");
	printf("\n (?) para incógnitas");
	printf("\n\n Operações disponíveis:");
	printf("\n (1) força elétrica");
	printf("\n (2) campo elétrica");
	printf("\n (3) diferença de potêncial");
	printf("\n (4) intensidade elétrica");
	printf("\n Selecione a operação desejada: ");
	scanf("%d", &opr); 
	switch (opr){
		case (1): 
		
		break;
		 
		case (2): 
		
		break;
		
		case (3): 
		
		break;
		
		case (4): 
		
		break;
	}
}

