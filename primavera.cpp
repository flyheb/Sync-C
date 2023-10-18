#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int horas, dias, sem = 0;

    printf("Quantas horas se passaram desde o início da primavera: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("O valor deve ser maior do que zero!\n");
    } else {
        dias = horas / 24;
        if (dias >= 7) {
            sem = dias / 7;
            dias = dias % 7;
        }
        printf("Se passaram %d semana(s), %d dia(s) e %d hora(s)!\n", sem, dias, horas % 24);
    }
}

