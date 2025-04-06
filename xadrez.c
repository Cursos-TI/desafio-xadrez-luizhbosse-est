#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Luiz Henrique Bosse

void moverBispo(int n) {
    if (n > 0) {
        printf("Cima Direita\n");  // Imprime o valor atual de n
        moverBispo(n - 1);  // Chama a si mesma com n - 1
    }
}

void moverTorre(int n) {
    if (n > 0) {
        printf("Direita\n");  // Imprime o valor atual de n
        moverTorre(n - 1);  // Chama a si mesma com n - 1
    }
}

void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");  // Imprime o valor atual de n
        moverRainha(n - 1);  // Chama a si mesma com n - 1
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movBispo = 1;
    int movTorre = 1;
    int movRainha = 1;
    int movCavalo01 = 1;
    int movCavalo02 = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Novato - Movimentação do bispo...\n");
    while(movBispo <= 5){
        printf("Cima Direita\n");
        movBispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Novato - Movimentação da torre...\n");
    do {
        printf("Direita\n");
        movTorre++;
    } while(movTorre <= 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Novato - Movimentação da Rainha...\n");
    for(movRainha = 1; movRainha <= 8; movRainha++){
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Experiente - Movimentação do Cavalo...\n");
    for(movCavalo01 = 1; movCavalo01 <= 1; movCavalo01++){

        while (movCavalo02 <= 2){
            printf("Baixo\n");
            movCavalo02++;
        }
        printf("Esquerda\n");
    }



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("Mestre - Movimentação do bispo recursivo...\n");
    moverBispo(5);
    printf("Mestre - Movimentação da torre...\n");
    moverTorre(5);
    printf("Mestre - Movimentação da Rainha...\n");
    moverRainha(8);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Mestre - Movimentação do Cavalo...\n");
    for(movCavalo01 = 1, movCavalo02 = 1; movCavalo01 <= 2; movCavalo01++, movCavalo02++){       
        printf("Cima\n"); 
        if (movCavalo02 < 2){
            continue;
        }
        printf("Direita\n");        
    }

    return 0;
}
