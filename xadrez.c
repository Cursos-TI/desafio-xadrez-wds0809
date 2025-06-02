#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // MOVIMENTE A TORRE 5 CASAS A DIREITA
    printf("=== TORRE ===\n"); // Imprimir o nome da peça
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // MOVIMENTO DO BISPO 5 CASAS NA DIAGONAL PARA CIMA E Á DIREITA
    int i = 1;
    printf("\n=== BISPO ===\n"); // Imprimir o nome da peça
    while (i <= 5){
        printf("Cima, Direita\n"); // Imprime a direção do movimento
        i++;
    }

    // MOVIMENTO DA RAINHA 8 CASAS PARA Á ESQUERDA

    i = 1;
    printf("\n=== RAINHA ===\n"); // Imprimir o nome da peça
    do{
       printf("Esquerda\n", i); // Imprime a direção do movimento
       i++;
    } while (i <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
