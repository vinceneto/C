#include<stdio.h>

int main()
{
    int i, quantidade;
    int total_pinturas = 0;
    int pequenas = 0, medias = 0, grandes = 0;

    for(i = 1; i<= 3; i++)
    {
        if(i == 1)
        {
            printf("Quantidade de pinturas P: ");
            scanf("%d", &quantidade);
            pequenas = quantidade;        
        } 
        else if(i == 2)
        {
            printf("Quantidade de pinturas M: ");
            scanf("%d", &quantidade);
            medias = quantidade;
        }
        else
        {
            printf("Quantidade de pinturas G: ");
            scanf("%d", &quantidade);
            grandes = quantidade;
        }
        total_pinturas += quantidade;
    }
    printf("Quantidade de pinturas pequenas: %d\n", pequenas);
    printf("Quantidade de pinturas medias: %d\n", medias);
    printf("Quantidade de pinturas grandes: %d\n", grandes);
    printf("Total de pinturas: %d\n", total_pinturas);
    return 0;
}

