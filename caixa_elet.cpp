#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "portuguese");
	int op;
	float sld, sq, dp;
	sld = 1000; 
	printf("CAIXA ELETRÔNICO!!!");
	printf("\n  (1) Saldo");
	printf("\n  (2) Deposito");
	printf("\n  (3) Saque");
	printf("\n  (4) Sair");
	printf("\n Selecione a operação que deseja realizar: ");
	scanf("%d", &op);
	switch (op){
		case 1: printf("\n Saldo: %.2f", sld); break;
		
		case 2: printf("\n Valor do deposito: "); 
				scanf("%f", &dp);
				sld = sld + dp;
				printf("\n Saldo atualizado: %.2f", sld);
		break;
		
		case 3: printf("\n Valor do saque: ");
				scanf("%f", &sq);
				sld = sld - sq;
				if (sq <= sld){
					printf("\n Saldo atualizado: %.2f", sld); 
			} else{
				printf("Saldo insuficiente.");
			}
		break;
		
		case 4: printf("\n Encerrando o atendimento."); 
		break;
		
		default: printf("Operação inválida.");
	}
}
