#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Linha Horizontal de Coordenadas (letras de A a J)
    int tabuleiro[10][10] = {0}; // Exibição Do Tabuleiro 10x10 (0 Indica Agua)
    tabuleiro[6][3] = 3, tabuleiro[7][3] = 3, tabuleiro[8][3] = 3; // Coordenadas do Primeiro Navio (7, D), (8, D) e (9, D)
    tabuleiro[3][5] = 3, tabuleiro[3][6] = 3, tabuleiro[3][7] = 3; // Coordenadas do Segundo Navio  (4, F), (4, G) e (4, H)

    // Exibindo a Linha Superior do Tabuleiro(Coordenadas Horizontais de A a J)
    printf("  "); // Espaço Para Alinhar a Primeira Linha Que Exibe As Letras das Coordenadas

    for (int i = 0; i < 10; i++) // Exibição Das Letras das Coordenadas
    {
        printf(" %c", letras[i]); // Exibe a Letra Correspondente a Coluna
    }

    printf("\n"); // Pula Para a Proxima Linha

    // Exibindo as linhas numeradas do tabuleiro (1 a 10)
    for (int i = 0; i < 10; i++) // Exibição Dos Numeros das Coordenadas
    {
        printf("%2d", i + 1);
        for (int j = 0; j < 10; j++) // Exibição Do Tabuleiro(0 Para Agua e 3 Para Navio)
        {
            printf("%2d", tabuleiro[i][j]); // Exibe o Valor de Tabuleiro na Posição (i, j)
        }
        printf("\n"); // Quebra de Linha Após Cada Linha Do Tabuleiro
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
