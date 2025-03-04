#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;  // Inicializa com água
        }
    }
}

void posicionarNavioHorizontal(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha][coluna + i] = NAVIO;  // Define as células do navio
    }
}

void posicionarNavioVertical(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[linha + i][coluna] = NAVIO;  // Define as células do navio
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    // Inicializa o tabuleiro
    inicializarTabuleiro(tabuleiro);

    // Define posições iniciais dos navios
    int linhaH = 2, colunaH = 3;  // Navio horizontal começa em (2,3)
    int linhaV = 5, colunaV = 7;  // Navio vertical começa em (5,7)

    // Posiciona os navios
    posicionarNavioHorizontal(tabuleiro, linhaH, colunaH);
    posicionarNavioVertical(tabuleiro, linhaV, colunaV);

    // Exibe o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}