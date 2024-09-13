#include <stdio.h>

int main()
{
    int i, qtde_agua_diaria, soma_qtde_agua = 0;

    printf("Informe a quantidade de agua em L:\n");

    for(i = 1; i <= 7; i++)
    {
        printf("Dia %d: ", i);
        scanf("%d", &qtde_agua_diaria);

        soma_qtde_agua = soma_qtde_agua + qtde_agua_diaria;
    }

    printf("\nA quantidade de agua semanal e' de: %d L.\n", soma_qtde_agua);

    return 0;
}