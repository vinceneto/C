
// Passagem de Vetores como Parâmetros em Linguagem C

// void imprime(int *m, int n);
// void imprime(int m[], int n);
// void imprime(int m[5], int n);

// void funcao(int x)
// {
//     x = 10; 
// }

// void alterar_valor(int v[], int tamanho)
// {
//     v[0] = 10;
// }

#include <stdio.h>

void imprime_vetor(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void dobrar_valores(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        v[i] = v[i] * 2;
    } 
}

int main()
{
    int numeros[5] = {1, 2, 3, 4, 5};
    printf("Vetor original: ");
    imprime_vetor(numeros, 5);

    dobrar_valores(numeros, 5);

    printf("Vetor dobrado: ");
    imprime_vetor(numeros, 5);

    return 0;
}













