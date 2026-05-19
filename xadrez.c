#include <stdio.h>

int main() {
    // ================================
    // MOVIMENTAÇÃO DO BISPO
    // 5 casas na diagonal superior direita
    // Utilizando estrutura FOR
    // ================================

    const int movimentosBispo = 5;

    printf("=== Movimento do Bispo ===\n");

    for (int i = 0; i < movimentosBispo; i++) {
        printf("Cima, Direita\n");
    }

    // Quebra de linha para organização
    printf("\n");


    // ================================
    // MOVIMENTAÇÃO DA TORRE
    // 5 casas para a direita
    // Utilizando estrutura WHILE
    // ================================

    const int movimentosTorre = 5;
    int contadorTorre = 0;

    printf("=== Movimento da Torre ===\n");

    while (contadorTorre < movimentosTorre) {
        printf("Direita\n");
        contadorTorre++;
    }

    // Quebra de linha para organização
    printf("\n");


    // ================================
    // MOVIMENTAÇÃO DA RAINHA
    // 8 casas para a esquerda
    // Utilizando estrutura DO-WHILE
    // ================================

    const int movimentosRainha = 8;
    int contadorRainha = 0;

    printf("=== Movimento da Rainha ===\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);


    // ================================
    // FIM DO PROGRAMA
    // ================================
    return 0;
}