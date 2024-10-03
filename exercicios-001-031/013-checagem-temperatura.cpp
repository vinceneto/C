#include <stdio.h>

int temperatura;

int main()
{
    printf("Digite o valor da temperatura atual: ");
    scanf("%d", &temperatura);

    if(temperatura < 10)
    {
        printf("Temperatura esta muito fria.\n");
    } 
    else if (temperatura < 20)
    {
        printf("Temperatura esta fria.\n");
    }
    else if (temperatura < 30)
    {
        printf("Temperatura esta' agradavel.\n");
    }
    else
    {
        printf("Temperatura esta' muito quente.\n");
    }
    
    return 0;
}