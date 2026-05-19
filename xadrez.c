#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}

void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    for (int i = 0; i < 1; i++) {

        int j = 0;

        while (j < 1) {
            printf("Cima, Direita\n");
            j++;
        }
    }

    moverBispo(casas - 1);
}

int main() {

    printf("=== Movimento do Bispo ===\n");

    moverBispo(5);

    printf("\n");

    printf("=== Movimento da Torre ===\n");

    moverTorre(5);

    printf("\n");

    printf("=== Movimento da Rainha ===\n");

    moverRainha(8);

    printf("\n");

    printf("=== Movimento do Cavalo ===\n");

    for (int i = 1, j = 1; i <= 2 && j <= 2; i++, j++) {

        if (i == 0) {
            continue;
        }

        printf("Cima\n");

        if (i == 2) {
            break;
        }
    }

    int direita = 0;

    while (direita < 1) {
        printf("Direita\n");
        direita++;
    }

    return 0;
}