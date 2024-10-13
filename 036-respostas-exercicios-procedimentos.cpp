#include <stdio.h>

// Declaração dos Procedimentos
void imprimir_caracteres(char c, int num);
void inverter_valores(int a, int b);
void maior_de_tres(int x, int y, int z);
void verificar_maioridade(int idade);
void converter_metros_para_centimentros(int metros);

int main()
{
    // Chamada dos Procedimentos
    imprimir_caracteres('*', 10);
    inverter_valores(5, 20);
    maior_de_tres(15, 20, 30);
    verificar_maioridade(50);
    converter_metros_para_centimentros(1);

    return 0;
}


// Definição dos Procedimentos
void imprimir_caracteres(char c, int num)
{
    for(int i = 0; i <= num; i++)
    {
        printf("%c \t", c);
    }
    printf("\n");
}

void inverter_valores(int a, int b)
{
    int temp;

    printf("Valores antes da inversão: A: %d - B: %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Valores depois da inversão: A: %d - B: %d\n", a, b);
}

void maior_de_tres(int x, int y, int z)
{
    if (x > y && x > z)
    {
        printf("X: %d eh maior\n", x);
    }
    else if(y > x && y > z)
    {
        printf("Y: %d eh maior\n", y);
    }
    else
    {
        printf("Z: %d eh maior\n", z);
    }
}

void verificar_maioridade(int idade)
{
    if (idade >= 18)
    {
        printf("Voce eh maior de idade.\n");
    }
    else
    {
        printf("Voce eh menor de idade.\n");
    }
}

void converter_metros_para_centimentros(int metros)
{
    printf("%d Metros eh igual a %d centimetros\n", metros, metros * 100);
}