#include <stdio.h>
int main(){
	int v1, v2;
	printf("Digite um valor: ");
	scanf("%d", &v1);
	printf("Digite um segundo valor: ");
	scanf("%d", &v2);
	if(v1 == v2){
		printf("Os valores digitados são iguais.");	
	} else{
		printf("Os valores digitados são diferentes.");
	}
}