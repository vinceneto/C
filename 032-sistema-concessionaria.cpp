#include <stdio.h>

int main()
{
    float preco_carro, preco_final, preco_parcelas;
    int qtde_parcelas;

    printf("> Digite o valor do carro: ");
    scanf("%f", &preco_carro);
    printf("\n");
    printf("> Escolha a quantidade de parcelas abaixo:\n");
    printf("> 0 - 6 - 12 - 18 - 24 - 30 - 36 - 42 - 48 - 54 - 60\n");
    printf("> No. Parcelas: ");
    scanf("%d", &qtde_parcelas);

    switch (qtde_parcelas)
    {
    case 0:
        preco_final = preco_carro - (preco_carro * 0.2);
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Pagamento A Vista.\n");
        break;
    case 6:
        preco_final = preco_carro + (preco_carro * 0.03);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 12:
        preco_final = preco_carro + (preco_carro * 0.06);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 18:
        preco_final = preco_carro + (preco_carro * 0.09);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 24:
        preco_final = preco_carro + (preco_carro * 0.12);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 30:
        preco_final = preco_carro + (preco_carro * 0.15);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 36:
        preco_final = preco_carro + (preco_carro * 0.18);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 42:
        preco_final = preco_carro + (preco_carro * 0.21);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 48:
        preco_final = preco_carro + (preco_carro * 0.24);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 54:
        preco_final = preco_carro + (preco_carro * 0.27);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    case 60:
        preco_final = preco_carro + (preco_carro * 0.3);
        preco_parcelas = preco_final / qtde_parcelas;
        printf("\n> Preco final: R$ %.2f\n", preco_final);
        printf("> Quantidade de parcelas: %d\n", qtde_parcelas);
        printf("> Valor de cada parcela: R$ %.2f\n", preco_parcelas);
        break;
    default:
        printf("> Opcao de parcelamento não permitida.\n");
        break;
    }

    return 0;
}