// Escreva um programa que leia 5 números inteiros e armazene-os em um vetor. 
// O programa deve calcular e imprimir a soma de todos os números.

#include <stdio.h>

int main()
{
    int vetor[5];
    int soma = 0;

    // Armazenando valores no vetor
    printf("Insira 5 valores inteiros:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("> vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Somando os valores do vetor
    for(int i = 0; i < 5; i++)
    {
        soma = soma + vetor[i];
    }

    // Imprimindo os valores dos elementos do vetor
    printf("> Soma dos elementos: %d\n", soma);

    return 0;
}