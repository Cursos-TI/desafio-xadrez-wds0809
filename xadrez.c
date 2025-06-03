#include <stdio.h>
// Definição de procedimento para imprimir uma mensagem
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n"); // Imprime a direção do movimento
        moverTorre(casas - 1);
    }
}
// Definição de procedimento para imprimir uma mensagem
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        moverBispo(casas - 1);
    }
}
// Definição de procedimento para imprimir uma mensagem
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n"); // Imprime a direção do movimento
        moverRainha(casas - 1);
    }
}
// Definição de procedimento para imprimir uma mensagem
void moverCavalo(int casas) {
    if (casas > 0) {
        printf("Cima\n"); // Imprime a direção do movimento
        moverCavalo(casas - 1);
    }
}
// Definição de procedimento para imprimir uma mensagem
void moverCavalo2(int casas) {
    if (casas > 0) {
        printf("Direita\n"); // Imprime a direção do movimento
        moverCavalo2(casas - 1);
    }
}

int main() {
    // MOVIMENTE A TORRE 5 CASAS A DIREITA
    printf("=== TORRE ===\n"); // Imprimir o nome da peça
    moverTorre(5); // Chamada do procedimento
    
    // MOVIMENTO DO BISPO 5 CASAS NA DIAGONAL PARA CIMA E Á DIREITA
    printf("\n=== BISPO ===\n"); // Imprimir o nome da peça
    moverBispo(5); // Chamada do procedimento

    // MOVIMENTO DA RAINHA 8 CASAS PARA Á ESQUERDA
    printf("\n=== RAINHA ===\n"); // Imprimir o nome da peça
    moverRainha(8); // Chamada do procedimento

    // MOVIMENTO CAVALO L
    printf("\n=== CAVALO ===\n"); // Imprimir o nome da peça
    moverCavalo(2); // Chamada do procedimento
    moverCavalo2(1); // Chamada do procedimento

    return 0;
}
