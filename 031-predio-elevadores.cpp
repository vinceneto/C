/**
 * Em um prédio com 50 moradores há três elevadores denominados A, B e C.
 * Para otimizar o sistema de controle dos elevadores, desenvolva um programa 
 * em que cada morador informa qual o elevador que utiliza com mais freqüência
 *  (A, B ou C). O programa deve contabilizar o total de pessoas que usa cada 
 * um dos elevadores e mostrar estes totais no final.
 * */

#include <stdio.h>

int main()
{
    int i; 
    char cod_elevador;
    int elevador_a = 0, elevador_b = 0, elevador_c = 0;

    printf("Digite o código do elevador a ser chamado (A, B ou C)\n");
    for(i = 1; i < 51; i++)
    {
        printf("[%d] Código: ", i);
        scanf(" %c", &cod_elevador);

        if(cod_elevador == 'A')
        {
            elevador_a += 1;
        } 
        else if (cod_elevador == 'B')
        {
            elevador_b += 1;
        }
        else if (cod_elevador == 'C')
        {
            elevador_c += 1;
        }
        else
        {
            printf("> CÓDIGO INVÁLIDO!\n");
        }
    }

    printf("Total de uso dos elevadores por pessoa.\n");
    printf("ELEVADOR A: %d\t ELEVADOR B: %d\t ELEVADOR C: %d\n", elevador_a, elevador_b, elevador_c);

    return 0;
}
