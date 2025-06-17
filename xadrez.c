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
    


    return 0;
}
