#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita
    int i;
    printf("Movimento da Torre:\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal (Cima e Direita)
    int j = 0;
    printf("\nMovimento do Bispo:\n");
    while(j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    int k = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k < 8);

    // Movimento do Cavalo: 2 casas para cima e 1 para a direita
    printf("\nMovimento do Cavalo:\n");
    int l;
    for(l = 0; l < 2; l++) {
        printf("Cima\n");
        if(l == 1) {
            int m = 0;
            while(m < 1) {
                printf("Direita\n");
                m++;
            }
        }
    }

    return 0;
}