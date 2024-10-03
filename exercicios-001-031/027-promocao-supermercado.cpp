#include <stdio.h>

int main() 
{
    int categoria;
    float preco, desconto, valor_final;

    // Solicita o preço do produto
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    // Exibe o menu de categorias
    printf("Escolha a categoria do produto:\n");
    printf("1. Alimentos (10%% de desconto)\n");
    printf("2. Eletrônicos (5%% de desconto)\n");
    printf("3. Roupas (15%% de desconto)\n");
    printf("4. Outros (2%% de desconto)\n");
    printf("Digite o número correspondente à categoria: ");
    scanf("%d", &categoria);

    // Estrutura switch-case para aplicar o desconto
    switch (categoria) 
    {
        case 1:
            desconto = 0.10 * preco;
            valor_final = preco - desconto;
            printf("Alimentos: 10%% de desconto aplicado. Valor final: R$ %.2f\n", valor_final);
            break;
        case 2:
            desconto = 0.05 * preco;
            valor_final = preco - desconto;
            printf("Eletrônicos: 5%% de desconto aplicado. Valor final: R$ %.2f\n", valor_final);
            break;
        case 3:
            desconto = 0.15 * preco;
            valor_final = preco - desconto;
            printf("Roupas: 15%% de desconto aplicado. Valor final: R$ %.2f\n", valor_final);
            break;
        case 4:
            desconto = 0.02 * preco;
            valor_final = preco - desconto;
            printf("Outros: 2%% de desconto aplicado. Valor final: R$ %.2f\n", valor_final);
            break;
        default:
            printf("Categoria inválida! Por favor, insira um número entre 1 e 4.\n");
            break;
    }

    return 0;
}
