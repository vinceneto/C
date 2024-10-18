// Crie um programa que leia um vetor de 10 números inteiros 
// e imprima os números na ordem inversa.

#include <stdio.h>

int main()
{
    int vetor[10];

    // Armazenando valores no vetor
    printf("Insira 10 valores inteiros:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("> vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Imprimindo o vetor invertido
    printf("\n> Imprimindo o vetor invertido: ");
    for(int i = 9; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}