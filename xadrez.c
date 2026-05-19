#include <stdio.h>

int main() {
    const int movimentosBispo = 5;

    printf("=== Movimento do Bispo ===\n");

    for (int i = 0; i < movimentosBispo; i++) {
        printf("Cima, Direita\n");
    }

    printf("\n");


    const int movimentosTorre = 5;
    int contadorTorre = 0;

    printf("=== Movimento da Torre ===\n");

    while (contadorTorre < movimentosTorre) {
        printf("Direita\n");
        contadorTorre++;
    }

    printf("\n");


    const int movimentosRainha = 8;
    int contadorRainha = 0;

    printf("=== Movimento da Rainha ===\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    printf("\n");


    const int movimentosBaixo = 2;
    const int movimentosEsquerda = 1;

    printf("=== Movimento do Cavalo ===\n");

    for (int i = 0; i < movimentosBaixo; i++) {

        int controle = 0;

        while (controle < 1) {
            printf("Baixo\n");
            controle++;
        }
    }

    int contadorCavalo = 0;

    while (contadorCavalo < movimentosEsquerda) {
        printf("Esquerda\n");
        contadorCavalo++;
    }

    return 0;
}
