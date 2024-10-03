#include <stdio.h>

float divisao, a, b;

int main()
{
    printf("Digite dois valores para operacao de Divisao: ");
    scanf("%f %f", &a, &b);

    if (b == 0)
    {
        printf("Nao existe divisao por Zero!\n");
    }
    else
    {
        divisao = a / b;
        printf("O valor da divisao e': %.1f\n", divisao);
    }
    return 0;
}