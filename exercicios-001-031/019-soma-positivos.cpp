#include <stdio.h>

int main()
{
    int numero, soma = 0;

    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        soma = soma + numero;

        printf("Digite outro numero inteiro nao-negativo: ");
        scanf("%d", &numero);
    }

    printf("A soma acumulada e' de: %d\n", soma);
 
    return 0;
}