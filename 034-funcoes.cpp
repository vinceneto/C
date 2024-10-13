#include <stdio.h>

// Declaração das funções
void saudacao();
void imprime_soma(int a, int b);
int multiplica(int a, int b);
int fatorial(int n);

int main() 
{
    saudacao();  // Chama função sem parâmetros e sem retorno
    imprime_soma(5, 10);  // Chama função com parâmetros, mas sem retorno
    
    int produto = multiplica(4, 3);  // Chama função com parâmetros e retorno
    printf("Produto: %d\n", produto);
    
    int resultado_fatorial = fatorial(5);  // Chama função recursiva
    printf("Fatorial de 5: %d\n", resultado_fatorial);
    
    return 0;
}


// Definição das funções
void saudacao() 
{
    printf("Bem-vindo ao mundo das funções!\n");
}

void imprime_soma(int a, int b) 
{
    printf("Soma: %d\n", a + b);
}

int multiplica(int a, int b) 
{
    return a * b;
}

int fatorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    } 
    else 
    {
        return n * fatorial(n - 1);
    }
}