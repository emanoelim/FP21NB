#include <stdio.h>

int main() {
    int n = 5;
    int vetor[n];
    int i;
    int soma = 0;
    float media;
    int maior;
    for(i = 0; i < n; i++) {
        printf("Informe o valor do item %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++) {
        soma = soma + vetor[i];
    }
    media = (float)soma / n;
    printf("Media: %.2f\n", media);

    maior = vetor[0];
    for(i = 1; i < n; i++) {
        if(vetor[i] > maior)
            maior = vetor[i];
    }
    printf("Maior: %d\n", maior);

    return 0;
}
