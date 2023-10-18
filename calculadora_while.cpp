#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int choice, cont = 0;

    do {
        if (cont == 0) {
            printf("Selecione uma opção:\n");
            printf("1 - Soma\n");
            printf("2 - Subtração\n");
            printf("3 - Multiplicação\n");
            printf("4 - Divisão\n");
            printf("5 - Potenciação\n");
            printf("7 - Sair\n");
            printf("Opção: ");
            scanf("%d", &choice);
        }
        
        switch (choice) {
            case 1: {
                float n1, n2;
                printf("Digite o primeiro número: ");
                scanf("%f", &n1);
                printf("Digite o segundo número: ");
                scanf("%f", &n2);
                printf("O resultado da soma é: %.2f\n", n1 + n2);
                break;
            }
            case 2: {
                float n3, n4;
                printf("Digite o primeiro número: ");
                scanf("%f", &n3);
                printf("Digite o segundo número: ");
                scanf("%f", &n4);
                printf("O resultado da subtração é: %.2f\n", n3 - n4);
                break;
            }
            case 3: {
                float n5, n6;
                printf("Digite o primeiro número: ");
                scanf("%f", &n5);
                printf("Digite o segundo número: ");
                scanf("%f", &n6);
                printf("O resultado da multiplicação é: %.2f\n", n5 * n6);
                break;
            }
            case 4: {
                float n7, n8;
                printf("Digite o primeiro número: ");
                scanf("%f", &n7);
                printf("Digite o segundo número: ");
                scanf("%f", &n8);
                if (n8 != 0) {
                    printf("O resultado da divisão é: %.2f\n", n7 / n8);
                } else {
                    printf("Erro: Divisão por zero!\n");
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
                printf("O resultado da potenciação é: %.2f\n", n9);
                break;
            }
            case 7: {
                printf("Programa encerrado!\n");
                break;
            }
            default: {
                printf("Opção inválida!\n");
            }
        }
        
        if (choice != 7) {
            printf("\nDeseja continuar? (0 para sim, 1 para não) ");
            scanf("%d", &cont);
        }
    } while (choice != 7);

}

