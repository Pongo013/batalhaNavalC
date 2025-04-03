#include <stdio.h>

int main() {
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10];
    
    //imprimir o tabuleiro
    for (int j = 0; j <= 9; j++) {
        printf("   %c", coluna[j]);
    }
    for (int i = 0; i <=9; i++) {
        printf("\n");
        printf("%i   ", linha[i]);
        for (int k = 0; k <= 9; k++) {
            if ((k >= 1 && k <= 3) && i == 0) {
                printf("3   ");
            } else if ((i >= 6 && i <= 8) && k == 8) {
                printf("3   ");
            } else {
                printf("0   ");
            }
        }
    }
}