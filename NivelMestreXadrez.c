#include <stdio.h>   // Biblioteca padrão

// Funções recursivas simples
void rainhaRecursiva(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    rainhaRecursiva(casas - 1);
}

void bispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    bispoRecursivo(casas - 1);
}

void torreRecursiva(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    torreRecursiva(casas - 1);
}

int main() {
    int rainha = 8; 
    int bispo = 5; 
    int torre = 5; 
    int cavalo = 2; 

    // RAINHA
    printf("Rainha\n");
    rainhaRecursiva(rainha);

    printf("\n");

    // BISPO (recursivo)
    printf("Bispo (Recursivo)\n");
    bispoRecursivo(bispo);

    printf("\n");

    // BISPO (loops aninhados)
    printf("Bispo (Loops)\n");
    for (int v = 0; v < bispo; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    printf("\n");

    // TORRE
    printf("Torre\n");
    torreRecursiva(torre);

    printf("\n");

    // CAVALO (loops complexos)
    printf("Cavalo\n");
    for (int i = 0; i < cavalo; i++) {
        for (int v = 0; v <= 2; v++) {
            if (v < 2) continue; // só executa no fim do movimento vertical
            for (int h = 0; h <= 1; h++) {
                if (h < 1) continue; // só executa no fim do movimento horizontal
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // sai do loop interno
            }
        }
    }

    return 0;   // Finalização do programa
}