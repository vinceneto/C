#include <stdio.h>

int numero;

int main()
{
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) 
    {
        printf("O numero %d e' par!\n", numero);
    }
    else
    {
        printf("O numero %d e' impar!\n", numero);
    }

    return 0;
}