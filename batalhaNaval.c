#include <stdio.h>

//iniciando as águas e posicionando os navios
void encherAgua(int tabuleiro[10][10]) {
    int z;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            //1º navio
            //verificação começa com a var i para posicionar na horizontal
            if ((i >= 1 && i <= 4) && j == 0 && tabuleiro[j][i] != 3) {
                tabuleiro[j][i] = 3;
                z++;
            //2º navio
            //verificação começa com a var j para posicionar na vertical
            } else if ((j >= 6 && j <= 8) && i == 8 && tabuleiro[j][i] != 3) {
                tabuleiro[j][i] = 3;
                z++;
            //3º navio
            //primeiro eu defino o alcance do valor das variáveis, e depois verifico se as variáveis (i e j) são de mesmo valor
            } else if ((i >= 3 && i <= 5) && (j >= 3 && j <= 5) && (i == j) && tabuleiro[j][i] != 3) {
                tabuleiro[j][i] = 3;
                z++;
            //4º navio
            //para fazer em outra diagonal, precisei verificar se a soma de i e j são nove, pois nessa diagonal, todas as somas serão 9 (0,9 - 1,8 - 2,7)
            } else if ((i >= 7 && i <= 9) && (j >= 0 && j <= 2) && (i + j == 9) && tabuleiro[j][i] != 3) {
                tabuleiro[j][i] = 3;
                z++;
            } else {
                tabuleiro[j][i] = 0;
            }
        }
    }
}

int main() {
    int tabuleiro[10][10];
    encherAgua(tabuleiro);
    //preparando as legendas de fora do tabuleiro
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    //imprimindo o tabuleiro
    for (int j = 0; j <= 9; j++) {
        printf("   %c", coluna[j]);
    }
    for (int i = 0; i <=9; i++) {
        printf("\n");
        printf("%i   ", linha[i]);
        for (int k = 0; k <= 9; k++) {
            printf("%i   ", tabuleiro[i][k]);
        }
    }
}