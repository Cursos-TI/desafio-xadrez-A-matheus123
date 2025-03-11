#include <stdio.h>

void torre(int t) {// recursividade da torre;
    if (t > 0) {
        printf("Torre: Direita!\n");
        torre(t - 1);
    }
} void bispo(int b) {// recursividade do bispo;
    if (b > 0) {
        printf("Bispo: Cima, direita!\n");
        bispo(b - 1);
    }
} void rainha(int r) {// recursividade da rainha;
    if (r > 0) {
        printf("Rainha: Esquerda!\n");
        rainha(r - 1);
    }
}


int main(){
        int pecas;
    printf("Peças:\n");// menu interativo;
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Escolha uma das peças: ");
    scanf("%d", &pecas);

    switch (pecas)// switch para escolha;
    {
    case 1:
        torre(5);// uso da recursividade depois do "int main";
        
        break;
    case 2:
        bispo(2);// uso da recursividade depois do "int main";
        for (int cima = 1; cima < 4; cima++) {// resto do loop do bispo, como pedido eu coloquei em loop aninhado. O comando "Cima" no loop externo e o comando "direita" no loop interno;

            printf("Bispo: Cima, ");

            for (int direita = 1; direita < 2; direita++) {

                printf("direita!\n");

            }
            
        }
        
        
        break;
    case 3:
        rainha(8);// uso da recursividade depois do "int main";
        
        break;
    case 4:

        printf("Cavalo: ");// no cavalo eu mudei apenas a direção que ele vai seguir (cima, cima e direita);
        for (int esquerda = 1; esquerda < 2; esquerda++)// estrutura for para loops;
        {
            for (int baixo = 1; baixo < 2 ; baixo++)// estrutura for aninhada;
            {
                printf("Cima, cima, ");
            }
            printf("direita!\n");
        }
        break;
    
    default:
        printf("Escolha apenas 1, 2 ou 3!\n");// opção default;
    }
    printf("\n");


    return 0;
}