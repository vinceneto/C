#include <stdio.h>

int main()
{
    int num1, num2, temp;
    
    printf("> Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("> Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("> Trocando valores das variáveis... \n");
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("\n> Numeros IMPARES entre %d e %d\n", num1, num2);
    
    for(int i = num1; i <= num2; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }
    printf("Fim.\n");

    return 0;
}