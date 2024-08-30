#include <stdio.h>

/* Declaração de variáveis */

//Tipo inteiro
int idade = 30;

//Tipo real
float altura = 38.76;
double temperatura = 30.0;

//Tipo caracter
char genero = 'm';

int main()
{
    printf("Imprimindo tipos diferentes de variáveis.: \n");
    printf("Tipo Inteiro: %d\n", idade);
    printf("Tipo Float: %f\n", altura);
    printf("Tipo Double: %f\n", temperatura);
    printf("Tipo Caracter: %c\n", genero);
    return 0;
}