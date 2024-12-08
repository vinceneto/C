/*
Comparação de Vetores
Escreva um programa que leia dois vetores de 5 elementos inteiros e verifique 
se eles são iguais (elemento a elemento). O programa deve exibir uma mensagem 
informando se os vetores são iguais ou diferentes.
*/

#include <stdio.h>
#define TAM 5

int main()
{
    int vetor1[TAM];
    int vetor2[TAM];
    int iguais = 1;

    // Preenchendo o vetor 1
    printf("> Preencha o Vetor 1:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("> vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    // Preenchendo o vetor 2
    printf("> Preencha o Vetor 2:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("> vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Verificando igualdade
    for(int i = 0; i < TAM; i++)
    {
        if(vetor1[i] != vetor2[i])
        {
            iguais = 0;
            break;
        }
    }

    // Imprimindo os vetores
    printf("\n> vetor1: { ");
    for(int i = 0; i < TAM; i++)
    {
        printf("%d ", vetor1[i]);
    }
    printf("}\n");

    printf("> vetor2: { ");
    for(int i = 0; i < TAM; i++)
    {
        printf("%d ", vetor2[i]);
    }
    printf("}\n");

    if(iguais) printf("> Os vetores são iguais!\n");
    else printf("> Os vetores são diferentes.\n");

    return 0;
}