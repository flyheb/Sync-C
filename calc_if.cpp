#include <stdio.h>
int main(){
	float n1, n2, n3, nf;
	int flt;
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite o número de faltas: ");
	scanf("%d", &flt);
	nf = (n1 + n2 + n3)/ 3; 
	if (nf >= 7 && flt < 10 ){
		printf("APROVADO!");
	}
	if(nf < 7 && flt < 10){
		printf("EXAME!");
	}		
	if (flt > 10){
		printf("REPROVADO!");
	}
}