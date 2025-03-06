#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Linha Horizontal de Coordenadas (letras de A a J)
    int tabuleiro[10][10] = {0}; // Exibição Do Tabuleiro 10x10 (0 Indica Agua)

    // Exibindo a Linha Superior do Tabuleiro(Coordenadas Horizontais de A a J)
    printf("  "); // Espaço Para Alinhar a Primeira Linha Que Exibe As Letras das Coordenadas

    for (int i = 6; i <= 8; i++) // Coordenadas do Primeiro Navio (7, D), (8, D) e (9, D)
    {
        tabuleiro[i][3] = 3;
    }

    for (int j = 5; j <= 7; j++) // Coordenadas do Segundo Navio  (4, F), (4, G) e (4, H)
    {
        tabuleiro[3][j] = 3;
    }

    for (int i = 0; i <= 2; i++) // Coordenadas do Terceiro Navio  (1, A), (2, B) e (3, C)
    {
        tabuleiro[i][i] = 3;
    }
     
    for (int i = 7, j = 6; i >= 5 && j <= 8; i--, j++) // Coordenadas do Quarto Navio  (8, G), (7, H) e (6, I)
    {
       tabuleiro[i][j] = 3; 
    }



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
            // Area de Habilidade Especial
            if (i == 3 && j == 2 || i == 4 && j == 1 || i == 4 && j == 2 || i == 4 && j == 3 ||
                i == 5 && j == 0 ||i == 5 && j == 1 ||i == 5 && j == 2 ||i == 5 && j == 3 ||
                i == 5 && j == 4) // Se Estiver a Condição For Verdadeira Atribui 1 ao Tabuleiro
            {

                tabuleiro[i][j] = 1; // Atribuindo o Valor 1 Se  Condição for Verdadeira

            } else if (i == 0 && j == 6 || i == 1 && j == 4 || i == 1 && j == 5 || i == 1 && j == 6 ||
                i == 1 && j == 7 ||i == 1 && j == 8 ||i == 2 && j == 6 )
            {

                    tabuleiro[i][j] = 1;

            } else if (i == 7 && j == 8 || i == 8 && j == 7 || i == 8 && j == 8 || i == 8 && j == 9 ||
                i == 9 && j == 8 )
            {

                tabuleiro[i][j] = 1;

            }

            printf("%2d", tabuleiro[i][j]); // Exibe o Valor de Tabuleiro na Posição (i, j)
        }
        printf("\n"); // Quebra de Linha Após Cada Linha Do Tabuleiro
    }

    return 0;
}
