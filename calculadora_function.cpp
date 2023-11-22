#include <stdio.h>
#include <locale.h>

float soma(float val1, float val2){
	return (val1 + val2);
}

float subtracao(float val1, float val2){
	return (val1 - val2);
}

float multiplicacao(float val1, float val2){
	return (val1 * val2);
}

float divisao(float val1, float val2){
	return (val1 / val2);
}

int fatorial(int val1){
	int fat = 1;
	for(int i = 1; i <= val1; i++){
		fat *= i;
	}
	return fat;
}

float potencia(float val1, int ex1){
	int contp = 0;
	float result = 1;
	
	while (contp < ex1){
        result *= val1;
        contp++;
    }
	return result;	
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int choice, cont = 0;

    do {
        if (cont == 0) {
            printf("Selecione uma op��o:\n");
            printf("1 - Soma\n");
            printf("2 - Subtra��o\n");
            printf("3 - Multiplica��o\n");
            printf("4 - Divis�o\n");
            printf("5 - Potencia��o\n");
            printf("6 - Fatorial\n");
            printf("7 - Sair\n");
            printf("Op��o: ");
            scanf("%d", &choice);
        }
        
        switch (choice) {
            case 1: {
                float val1, val2;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &val1);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &val2);
                printf("O resultado da soma �: %.2f\n", soma(val1, val2));
                break;
            }
            case 2: {
                float val1, val2;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &val1);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &val2);
                printf("O resultado da subtra��o �: %.2f\n", subtracao(val1, val2));
                break;
            }
            case 3: {
                float val1, val2;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &val1);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &val2);
                printf("O resultado da multiplica��o �: %.2f\n", multiplicacao(val1, val2));
                break;
            }
            case 4: {
                float val1, val2;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &val1);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &val2);
                if (val2 != 0) {
                    printf("O resultado da divis�o �: %.2f\n", divisao(val1, val2));
                } else {
                    printf("Erro: Divis�o por zero!\n");
                }
                break;
            }
            case 5: {
                float val1;
                int ex1;
                printf("Digite o valor da base: ");
                scanf("%f", &val1);
                printf("Digite o valor do expoente: ");
                scanf("%d", &ex1);
                printf("O resultado da potencia��o �: %.2f\n", potencia(val1, ex1));
                break;
            }
            
            case 6:{
            	int val1;
            	int i = 1;
            	printf("Digite o valor do fator: ");
            	scanf("%d", &val1);
                printf("O resultado do fatorial �: %d \n", fatorial(val1));
				break;
			} 
            
            case 7: {
                printf("Programa encerrado!\n");
                break;
            }
            default: {
                printf("Op��o inv�lida!\n");
            }
        }
        
        if (choice != 7) {
            printf("\nDeseja continuar? (0 para sim, 7 para n�o) ");
            scanf("%d", &cont);
        }
    } while (choice != 7);

}
