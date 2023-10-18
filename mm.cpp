#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese");
    int num1, num2, num3;
    printf("Coloque um número: ");
    scanf("%d", &num1);
    printf("Coloque mais um número: ");
    scanf("%d", &num2);
    printf("Coloque um terceiro número: ");
    scanf("%d", &num3);
    if ( num1 > num2 && num1 > num3) { 
    printf ("%d é o maior número\n", num1);
    } 
    else {
        if ( num2 > num1 && num2 > num3) {
            printf("%d é o maior número\n", num2);
        }
    }
    if ( num3 > num1 && num3 > num2) {
            printf("%d é o maior número\n", num3);
           }
    else {
        if ( num1 < num2 && num1 < num3) {
        printf("%d é o menor número\n", num1);
    }
       }
       if ( num2 < num1 && num2 < num3) {
            printf("%d é o menor número\n", num2);
           }
    else {
        if ( num3 < num2 && num3 < num2) {
        printf("%d é o menor número\n", num3);
    }
  }
}
