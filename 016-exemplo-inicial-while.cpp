#include <stdio.h>

int main()
{
    // Expressão inicial
    int i = 10;

    while (i >= 0) // Expressão booleana
    {
        printf("%d ", i);

        i -= 2; // equivalência -> i = i - 2;
        // i--; // Expressão de decremento
        // i++; // Expressão de incremento
    }

    return 0;
}