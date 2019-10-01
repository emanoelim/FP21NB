#include <stdio.h>

int main() {
    float salto, melhor, pior, soma, media;
    int i;

    printf("Informe o salto 1: ");
    scanf("%f", &salto);

    melhor = salto;
    pior = salto;
    soma = salto;
    for(i = 0; i < 4; i++) {
        printf("Informe o salto %d: ", i + 2);
        scanf("%f", &salto);

        soma = soma + salto;

        if(salto > melhor)
            melhor = salto;
        if(salto < pior)
            pior = salto;
    }

    soma = soma - melhor - pior;
    media = soma / 3;

    printf("Melhor: %.1f m\n", melhor);
    printf("Pior: %.1f m\n", pior);
    printf("Média dos demais saltos: %.1f m\n", media);

    return 0;
}
