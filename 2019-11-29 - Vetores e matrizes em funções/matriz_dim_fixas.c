#include <stdio.h>

void imprime_matriz(int matriz[2][2]);

int main(void) {
    int matriz[][2] = { {1, 2}, {3, 4} };
    imprime_matriz(matriz);
    return 0;
}

void imprime_matriz(int matriz[2][2]) { // matriz[][2]
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
