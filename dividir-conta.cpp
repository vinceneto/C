#include <stdio.h>

float valor_total, valor_felipe;
int valor_carlos, valor_andre;

int main()
{
    printf("Digite o valor total da conta: ");
    scanf("%f", &valor_total);

    valor_carlos = valor_total / 3;
    valor_andre = valor_total / 3;

    valor_carlos = valor_carlos - (valor_carlos % 1);
    valor_andre = valor_andre - (valor_andre % 1);
    valor_felipe = valor_total - valor_carlos - valor_andre;

    printf("Carlos: R$ %d\n", valor_carlos);
    printf("Andre: R$ %d\n", valor_andre);
    printf("Felipe: R$ %.2f\n", valor_felipe);

    return 0;
}