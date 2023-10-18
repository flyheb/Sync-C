#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("NOME \t\t MÉDIA \t FALTAS\n");
	printf("João da Cunha\t 7,6 \t 12 \n");
	printf("Marcelo \t 3 \t 80 \n");
}
