#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");
    int num1, num2, num3;
    printf("Coloque um n�mero: ");
    scanf("%d", &num1);
    printf("Coloque mais um n�mero: ");
    scanf("%d", &num2);
    printf("Coloque um terceiro n�mero: ");
    scanf("%d", &num3);
    if ( num1 > num2 && num1 > num3) { 
    printf ("%d � o maior n�mero\n", num1);
    } 
    else {
        if ( num2 > num1 && num2 > num3) {
            printf("%d � o maior n�mero\n", num2);
        }
    }
    if ( num3 > num1 && num3 > num2) {
            printf("%d � o maior n�mero\n", num3);
           }
    else {
        if ( num1 < num2 && num1 < num3) {
        printf("%d � o menor n�mero\n", num1);
    }
       }
       if ( num2 < num1 && num2 < num3) {
            printf("%d � o menor n�mero\n", num2);
           }
    else {
        if ( num3 < num2 && num3 < num2) {
        printf("%d � o menor n�mero\n", num3);
    }
  }
}
