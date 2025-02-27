#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    int pecas, t = 1, b = 1;// variáveis do programa;

    printf("Peças:\n");// menu interativo;
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Escolha uma das peças: ");
    scanf("%d", &pecas);

    switch (pecas)// switch para escolha;
    {
    case 1:
        while (t <= 5)// eu preferi começar pelo while, aqui é onde fica a lógica;
        {
            printf("Torre: Direita!\n");// aqui é o que que o programa vai fazer, no caso imprimir "Torre: Direita!";
            t++;// aqui eu coloco o incremento para não dar loop infinito;
        }
        
        break;
    case 2:
        do {// para o bispo eu preferi usar o do-while;

            printf("Bispo: Cima, direita!\n");// aqui é o que que o programa vai fazer, no caso imprimir "bispo: Cima, direita!";
            b++;// aqui eu coloco o incremento para não dar loop infinito;

        } while (b <= 5);// só então eu coloco a lógica do programa;
        

        break;
    case 3:
        for (int r = 1; r <= 8; r++)// no for, cria uma variável inteira, cria a lógica e faz o incremento;
        {
            
            printf("Rainha: Esquerda!\n");// aqui é o que que o programa vai fazer, no caso imprimir "Rainha: Esquerda!";

        }
        
        break;
    
    default:
        printf("Escolha apenas 1, 2 ou 3!\n");
    }


    return 0;
}
