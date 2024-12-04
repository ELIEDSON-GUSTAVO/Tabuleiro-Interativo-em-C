#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TAMANHO 8

void inicializarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '0'; // Posição vazia
        }
    }
}

void exibirTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    printf("  \033[1;34ma b c d e f g h\033[0m\n"); // Letras das colunas em azul
    for (int i = 0; i < TAMANHO; i++) {
        printf("\033[1;34m%d\033[0m ", i + 1); // Números das linhas em azul
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == '1') {
                printf("\033[1;31m%c \033[0m", tabuleiro[i][j]); // Cor vermelha para '1'
            } else {
                printf("\033[1;32m%c \033[0m", tabuleiro[i][j]); // Cor verde para '0'
            }
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[TAMANHO][TAMANHO];
    char coordenada[3];

    inicializarTabuleiro(tabuleiro);

    printf("Digite 3 coordenadas no formato letra+número (ex: a1, c3):\n");
    for (int k = 0; k < 3; k++) {
        printf("Coordenada %d: ", k + 1);
        scanf("%2s", coordenada);

        // Converter para minúsculo para garantir que funcione com maiúsculas ou minúsculas
        coordenada[0] = tolower(coordenada[0]);

        // Validar coordenada
        if (strlen(coordenada) != 2 || !isalpha(coordenada[0]) || !isdigit(coordenada[1])) {
            printf("\033[1;31mCoordenada inválida. Tente novamente.\033[0m\n");
            k--;
            continue;
        }

        // Converter letra e número para índices da matriz
        int coluna = coordenada[0] - 'a';
        int linha = coordenada[1] - '1';

        if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO) {
            printf("\033[1;31mCoordenada fora do tabuleiro. Tente novamente.\033[0m\n");
            k--;
            continue;
        }

        tabuleiro[linha][coluna] = '1'; // Marcar posição
    }

    printf("\nTabuleiro resultante:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}