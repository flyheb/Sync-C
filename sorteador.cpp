#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int random(){
	srand((int)time(NULL));
	return (rand() % 100) + 1;
}

int certo(int choice, int rnd1){
	if(choice == rnd1){
		return 1;
	}else{
		return 0;
	}
}

int dica(int choice, int rnd1){
	if(choice > rnd1){
		return 1;
	}else if(choice < rnd1){
		return 2;
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int rnd1 = random();
	int cont = 7, choice, venceu = false;
	do {
		printf("Digite um número para tentar: ");
		scanf("%d", &choice);
		cont -= 1;
		if(certo(choice, rnd1) == 1){
			break;
		}if (cont > 0) {
            if(dica(choice, rnd1) == 1){
                printf("O chute foi alto!\n\n");
            } else if(dica(choice, rnd1) == 2){
                printf("O chute foi baixo!\n\n");
            }
		}
		
	}while(cont > 0);
	
	if (certo(choice, rnd1) == 1){
		printf("\nVocê venceu!");
	}else{
		printf("\nSuas chances acabaram.");
	}
}
