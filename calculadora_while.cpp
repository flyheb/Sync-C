#include <stdio.h>
#include <locale.h>

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
            printf("7 - Sair\n");
            printf("Op��o: ");
            scanf("%d", &choice);
        }
        
        switch (choice) {
            case 1: {
                float n1, n2;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &n1);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &n2);
                printf("O resultado da soma �: %.2f\n", n1 + n2);
                break;
            }
            case 2: {
                float n3, n4;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &n3);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &n4);
                printf("O resultado da subtra��o �: %.2f\n", n3 - n4);
                break;
            }
            case 3: {
                float n5, n6;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &n5);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &n6);
                printf("O resultado da multiplica��o �: %.2f\n", n5 * n6);
                break;
            }
            case 4: {
                float n7, n8;
                printf("Digite o primeiro n�mero: ");
                scanf("%f", &n7);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &n8);
                if (n8 != 0) {
                    printf("O resultado da divis�o �: %.2f\n", n7 / n8);
                } else {
                    printf("Erro: Divis�o por zero!\n");
                }
                break;
            }
            case 5: {
                float n9;
                int ex1, cont = 1;
                printf("Digite o valor da base: ");
                scanf("%f", &n9);
                printf("Digite o valor do expoente: ");
                scanf("%d", &ex1);
                while (cont != ex1) {
                    n9 = n9 * n9;
                    cont++;
                }
                printf("O resultado da potencia��o �: %.2f\n", n9);
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
            printf("\nDeseja continuar? (0 para sim, 1 para n�o) ");
            scanf("%d", &cont);
        }
    } while (choice != 7);

}

