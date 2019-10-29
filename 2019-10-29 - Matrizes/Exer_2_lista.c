#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL)); // inicialização semente

    int l = 5, c = 3, i, j;
    int matriz_a[l][c], matriz_b[l][c], matriz_c[l][c];

    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            matriz_a[i][j] = rand() % 50 + 1;
            matriz_b[i][j] = rand() % 60 + 1;
        }
    }

    printf("Matriz a:\n");
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matriz_a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz b:\n");
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matriz_b[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }

    printf("\nMatriz c:\n");
    for(i = 0; i < l; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matriz_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
