#include <stdio.h>

// Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;

    for (int i = 0; i < 1; i++) {            
        for (int j = 0; j < 1; j++) {        
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Cavalo
void moverCavalo() {
    int movimentos = 0;

    for (int i = 0; i < 3; i++) {        
        for (int j = 0; j < 3; j++) {    
            if (i == 0 && j == 0) continue; 

            if (i == 2 && j == 1) {      
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentos++;
                break;
            }
        }
        if (movimentos > 0) break; 
    }
}

int main() {
    // Torre
    printf("Torre:\n");
    moverTorre(5);

    // Bispo
    printf("\nBispo:\n");
    moverBispo(5);

    // Rainha
    printf("\nRainha:\n");
    moverRainha(8);

    // Cavalo
    printf("\nCavalo:\n");
    moverCavalo();



    return 0;
}
