#include <stdio.h>

int idade;

int main()
{
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade < 13)
    {
        printf("Voce e' uma criança.\n");
    }
    else if (idade >= 13 && idade < 18)
    {
        printf("Voce e' um adolescente.\n");
    }
    else if (idade >= 18 && idade < 60)
    {
        printf("Voce e' um adulto.\n");
    }
    else
    {
        printf("Voce e' um idoso.\n");
    }
    return 0;
}