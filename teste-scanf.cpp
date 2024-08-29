#include <stdio.h>

int idade;
float peso;

int main()
{
    // entrada de dados
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    // Saída de dados
    printf("Idade do Usuario: %d\n", idade);
    printf("Peso do Usuario: %f\n", peso);

    return 0;
}