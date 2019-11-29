#include <stdio.h>

int l, c;

void imprime_matriz(int matriz[l][c]);

int main(void) {
    printf("Informe l e c (l, c): ");
    scanf("%d, %d", &l, &c);
    int matriz[l][c], i, j;
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("Informe o valor de %d, %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    imprime_matriz(matriz);
    return 0;
}

void imprime_matriz(int matriz[l][c]) { // matriz[][c]
    int i, j;
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
