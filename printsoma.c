#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf ("Digite numero 1:");
    scanf ("%d", &num1);
    printf ("Digite numero 2:");
    scanf ("%d", &num2);
    int soma = num1 + num2;
    printf ("soma: %d\n", soma);
    return 0;
}