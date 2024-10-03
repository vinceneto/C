#include <stdio.h>

int main()
{
    int i, tempo, soma_tempo = 0;

    printf("Digite o tempo em cada volta (em min):\n");
    
    for(i = 1; i <= 10; i++)
    {
        printf("[%d]", i);
        scanf("%d", &tempo);

        soma_tempo = soma_tempo + tempo;
    }

    printf("\nO tempo total gasto foi de %d minutos.\n", soma_tempo);

    return 0;
}