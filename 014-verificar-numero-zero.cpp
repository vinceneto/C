#include <stdio.h>

int numero;

int main()
{
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O numero %d e' Positivo.\n", numero);
    }
    else if (numero < 0)
    {
        printf("O numero %d e' Negativo.\n", numero);
    }
    else
    {
        printf("O numero é Zero.\n");
    }
    
    
    return 0;
}