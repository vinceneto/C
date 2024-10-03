/**
 * 1) Faça um programa para ler o código e o preço de 15 produtos, calcular e 
 * escrever:
 * - o maior preço lido;
 * - a média aritmética dos preços dos produtos;
 */

#include <stdio.h>

int main()
{
    int cod_produto, i, cod_atual;
    float preco_produto, maior_preco = 0, media, soma = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite o codigo do produto: ");
        scanf("%d", &cod_produto);
        printf("Informe o preco do produto: ");
        scanf("%f", &preco_produto);

        if(preco_produto > maior_preco)
        {
            maior_preco = preco_produto;
            cod_atual = cod_produto;
        }

        soma = soma + preco_produto;
    }

    media = soma / 15;

    printf("\nProduto de maior valor\n");
    printf("CODIGO: %d\t VALOR: %.2f\t MEDIA: %.2f\n", cod_atual, maior_preco, media);

    return 0;
}