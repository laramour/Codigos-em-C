#include <stdio.h>
int main(){
    char letra;
    int idade;
    float altura;
    printf ("Digite a inicial do seu nome:");
    scanf ("%c", &letra);
    printf ("Digite sua idade:");
    scanf ("%d", &idade);
    printf ("Digite sua altura:");
    scanf ("%f", &altura);
    printf ("Inicial %c\n", letra); 
    printf ("Idade %d\n", idade);
    printf ("altura %f\n", altura);
    return 0;
}
