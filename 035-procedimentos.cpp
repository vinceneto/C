#include <stdio.h>

// Declaração dos procedimentos
void saudacao();
void imprime_soma(int, int);
void leitura_e_impressao();

int main() 
{
    saudacao();  // Procedimento sem parâmetros
    
    imprime_soma(5, 10);  // Procedimento com parâmetros
    
    leitura_e_impressao();  // Procedimento que faz leitura e saída
    
    return 0;
}

// Definição dos procedimentos
void saudacao() 
{
    printf("Bem-vindo à aula de Procedimentos!\n");
}

void imprime_soma(int a, int b) 
{
    printf("Soma: %d\n", a + b);
}

void leitura_e_impressao() 
{
    int valor;
    printf("Digite um número: ");
    scanf("%d", &valor);
    printf("Você digitou: %d\n", valor);
}
