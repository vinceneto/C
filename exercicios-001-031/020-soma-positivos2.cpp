#include <stdio.h>

int main()
{
    int numero, soma = 0, i = 0;

    printf("Digite cinco numeros inteiros nao-negativo:\n");
    while (i < 5)
    {
        printf("%d: ", i);
        scanf("%d", &numero);

        soma = soma + numero;

        i++;
    }

    printf("A soma acumulada e' de: %d\n", soma);
 
    return 0;
}