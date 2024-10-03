/* Escreva um programa para ler 2 valores e se o segundo valor informado for ZERO, deve
ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e
imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido. (utilizar a
estrutura FOR).*/

#include <stdio.h>

int main()
{
    int i;
    float num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    for (;;)
    {
        printf("Digite o segundo valor: ");
        scanf("%f", &num2);

        if (num2 != 0)
        {
            break;
        }
        else
        {
            printf("VALOR INVALIDO\n");
        }  
    }

    printf("O valor da divisao e': %.2f\n", num1 / num2);
    
    return 0;
}