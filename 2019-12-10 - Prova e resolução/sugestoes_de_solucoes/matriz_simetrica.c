#include <stdio.h>

int valida_simetrica(int m[][3]);

int main(void) {
    int i, j, m[3][3], simetrica;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("informe o item %d, %d: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    simetrica = valida_simetrica(m);
    if(simetrica)
        printf("matriz simétrica.");
    else
        printf("matriz não simétrica.");
    return 0;
}

int valida_simetrica(int m[][3]) {
    int i, j, simetrica = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(m[i][j] != m[j][i])
                simetrica = 0;
        }
    }
    return simetrica;
}
