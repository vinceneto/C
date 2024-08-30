#include <stdio.h>

int qtde_p, qtde_m, qtde_g, total_compra;

int main()
{
    printf("Quantas camisas tam P: ");
    scanf("%d", &qtde_p);

    printf("Quantas camisas tam M: ");
    scanf("%d", &qtde_m);

    printf("Quantas camisas tam G: ");
    scanf("%d", &qtde_g);

    total_compra = (qtde_p * 10) + (qtde_m * 12) + (qtde_g * 15);

    printf("O valor total da compra e': R$ %d\n", total_compra);

    return 0;
}