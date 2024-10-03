#include <stdio.h>

int main()
{
    int i = 1;

    printf("Tabuada de 8\n");
    while(i < 11)
    {
        printf("8 x %d = %d\n", i, 8 * i);

        i++;
    }

    return 0;
}