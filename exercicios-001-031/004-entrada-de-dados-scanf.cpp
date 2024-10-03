#include <stdio.h>

/* Declaração de variáveis */

//Tipo inteiro
int idade;

//Tipo real
float altura;
double peso;

//Tipo caracter
char genero;

int main()
{
    printf("Preencha o formulario abaixo: \n");
    printf("Qual seu genero [M - F]? ");
    scanf("%c", &genero);
    printf("Qual sua idade? ");
    scanf("%d", &idade);
    printf("Qual sua altura? ");
    scanf("%f", &altura);
    printf("Qual seu peso? ");
    scanf("%lf", &peso);

    return 0;
}