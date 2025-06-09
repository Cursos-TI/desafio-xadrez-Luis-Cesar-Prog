#include <stdio.h>

// Função recursiva para a Torre
void movimentoTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    movimentoTorre(casas - 1);
}

// Função recursiva para a Rainha
void movimentoRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    movimentoRainha(casas - 1);
}

// Função recursiva para o Bispo (com loops dentro)
void movimentoBispo(int casas, int passo) {
    if (casas == 0) {
        return;
    }

    // Primeiro vai para cima
    for (int i = 0; i < passo; i++) {
        printf("Cima\n");
    }
    // Depois vai para a direita
    for (int j = 0; j < passo; j++) {
        printf("Direita\n");
    }

    // Chama de novo para continuar
    movimentoBispo(casas - 1, passo);
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    movimentoTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    movimentoBispo(casasBispo, 1);

    printf("\nMovimento da Rainha:\n");
    movimentoRainha(casasRainha);

    // Movimento do Cavalo: em L (2 para cima e 1 para direita)
    printf("\nMovimento do Cavalo:\n");
    int cimaMax = 2;
    int direitaMax = 1;

    for (int i = 1; i <= cimaMax; i++) {
        printf("Cima\n");

        // Quando chegar em cimaMax, vai para direita
        if (i == cimaMax) {
            for (int j = 1; j <= direitaMax; j++) {
                if (j > 1) {
                    break; // só para mostrar que tem break
                }
                printf("Direita\n");
            }
        }
    }

    return 0;
}
