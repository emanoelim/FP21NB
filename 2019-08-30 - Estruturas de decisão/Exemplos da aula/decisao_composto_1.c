#include <stdio.h>

int main(void) {
    float nota1, nota2, media;
    printf("Informe nota 1: ");
    scanf("%f", &nota1);
    printf("Informa nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    if(media >= 6)
        printf("Aprovado.");
    else
        printf("Reprovado");

    return 0;
}
