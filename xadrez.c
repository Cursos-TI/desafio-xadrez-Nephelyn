#include <stdio.h>

int main() {
   // torre
    printf("Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Bispo
    int i = 0;
    printf("Bispo:\n");
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Rainha
    int j = 0;
    printf("Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);

    // Cavalo 
    printf("\nCavalo:\n");
    for (int k = 0; k < 1; k++) {
        int l = 0;
        while (l < 2) {
            printf("Baixo\n");
            l++;
        }
        printf("Esquerda\n");
    }



    return 0;
}
