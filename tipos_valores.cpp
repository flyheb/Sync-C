#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("A sua idade é %d!", idade);
}
