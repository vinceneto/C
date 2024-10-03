/**
 * 2) Faça um programa para ler uma quantidade e a seguir ler esta quantidade de números. 
 * Depois de ler todos os números o programa deve apresentar na tela o maior dos números 
 * lidos e a média dos números lidos.
 */

#include <stdio.h>

int main()
{
    int n, i;
    float maior_numero = 0, media, numero, soma = 0;

    printf("Quantos valores serao lidos? ");
    scanf("%d", &n);

    printf("Digite os numeros:\n");
    for(i = 0; i < n; i++)
    {
        printf("[%d]: ", i);
        scanf("%f", &numero);

        if (numero > maior_numero)
        {
            maior_numero = numero;
        }

        soma = soma + numero;
    }

    media = soma / n;

    printf("\nMaior valor: %.1f\n", maior_numero);
    printf("Media de valores: %.1f\n", media);

    return 0;
}