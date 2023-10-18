#include <stdio.h>
int main(){
	int pss; 
	printf("Digite a senha de acesso: ");
	scanf("%d", &pss);
	if (pss == 1234){
		printf("Acesso autorizado!");
	} else{
		printf("Acesso negado!");
	}
}