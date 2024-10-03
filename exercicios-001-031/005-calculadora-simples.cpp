#include <stdio.h>

//inteiro
int a = 5, adicao, subtracao;
int b = 10;

//real
float multiplicacao, divisao;

int main()
{
    adicao = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = float(a) / float(b);

    printf("A soma de %d + %d = %d\n", a, b, adicao);
    printf("A subtracao de %d - %d = %d\n", a, b, subtracao);
    printf("A multiplicacao de %d x %d = %f\n", a, b, multiplicacao);
    printf("A divisao de %d / %d = %f\n\n", a, b, divisao);
    
    return 0;
}