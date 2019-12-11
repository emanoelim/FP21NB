#include <stdio.h>

void imprime(int v[], int n);
int acha_maior(int v[], int n);
int acha_menor(int v[], int n);
int exclui(int v[], int n, int indice);

int main(void) {
    int n = 10;
    int v[n], i, maior, menor;
    for(i = 0; i < n; i++) {
        printf("informe o item %d: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("vetor original:\n");
    imprime(v, n);

    maior = acha_maior(v, n);
    printf("\n\nprimeiro maior: %d\n", v[maior]);
    exclui(v, n, maior);
    n--;
    printf("primeiro maior excluido:\n");
    imprime(v, n);

    menor = acha_menor(v, n);
    printf("\n\nprimeiro menor: %d\n", v[menor]);
    exclui(v, n, menor);
    n--;
    printf("primeiro menor excluido:\n");
    imprime(v, n);

    maior = acha_maior(v, n);
    printf("\n\nsegundo maior: %d\n", v[maior]);
    exclui(v, n, maior);
    n--;
    printf("segundo maior excluido:\n");
    imprime(v, n);

    menor = acha_menor(v, n);
    printf("\n\nsegundo menor: %d\n", v[menor]);
    exclui(v, n, menor);
    n--;
    printf("segundo menor excluido:\n");
    imprime(v, n);

    return 0;
}

void imprime(int v[], int n) {
    int i = 0;
    for(i = 0; i < n; i++)
        printf("%d\t", v[i]);
}

int acha_maior(int v[], int n) {
    int i;
    int maior = 0;
    for(i = 1; i < n; i++) {
        if(v[i] > v[maior])
            maior = i;
    }
    return maior;
}

int acha_menor(int v[], int n) {
    int i;
    int menor = 0;
    for(i = 1; i < n; i++) {
        if(v[i] < v[menor])
            menor = i;
    }
    return menor;
}

int exclui(int v[], int n, int indice) {
    int i;
    for(i = indice; i < n - 1; i++)
        v[i] = v[i + 1];
}
