// O restaurante a quilo cobra R$12,00 por cada quilo de refeição. 
// Escreva um algoritmo que leia o peso do prato montado pelo cliente 
// (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte 
// o peso do prato.

#include <stdio.h>

float peso_prato, total;
int id_mesa;

int main()
{
    printf("Digite o ID da mesa do cliente [ID = 1 a 10]: ");
    scanf("%d", &id_mesa);
    printf("Digite o peso do prato em kg: ");
    scanf("%f", &peso_prato);

    total = peso_prato * 12;

    printf("O valor da comanda da mesa %d e': R$ %.2f\n", id_mesa, total);

    return 0;
}