#include <stdio.h>

// Constantes de movimentação
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define MOVIMENTOS_CAVALO 1

// Função recursiva para mover a torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Torre - Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover a rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha - Esquerda\n");
    moverRainha(passos - 1);
}

int main(void) {
    // Movimento da TORRE (função recursiva)
    printf("Movimento da Torre:\n");
    moverTorre(MOVIMENTOS_TORRE);
    printf("----------------------\n");

    // Movimento do BISPO (loop aninhado: 5 movimentos em L "Cima Direita")
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Bispo - Cima Direita\n");
    }
    printf("----------------------\n");

    // Movimento da RAINHA (função recursiva)
    printf("Movimento da Rainha:\n");
    moverRainha(MOVIMENTOS_RAINHA);
    printf("----------------------\n");

    // Movimento do CAVALO: L (2 para cima, 1 para direita)
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < MOVIMENTOS_CAVALO; i++) {
        printf("Cavalo - Cima\n");
        printf("Cavalo - Cima\n");
        printf("Cavalo - Direita\n");
        printf("--- Movimento L completo ---\n");
    }

    return 0;
}
