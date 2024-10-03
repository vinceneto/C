#include <stdio.h>

int main()
{
    float num1, num2;
    char op;

    printf("Digite: numero op numero: ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+':
            printf("= %f\n", num1 + num2);
        break;
        case '-':
            printf("= %f\n", num1 - num2);
        break;
        case '*':
            printf("= %f\n", num1 * num2);
        break;
        case '/':
            printf("= %f\n", num1 / num2);
        break;
        default:
            printf("Operador Invalido!\n");
        break;
    }
    
    return 0;
}