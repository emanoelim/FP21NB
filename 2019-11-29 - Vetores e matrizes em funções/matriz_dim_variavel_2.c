#include <stdio.h>

int main(void) {
    int matriz[][2] = { {1, 2}, {3, 4} };
    imprime_matriz(2, 2, matriz);
    return 0;
}

void imprime_matriz(int l, int c, int matriz[l][c]) { // matriz[][c] (int l e int c precisam vir antes)
    int i, j;
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
