#include <stdio.h>

int main(void) {
    float nota;
    printf("Informe a nota: ");
    scanf("%f", &nota);

    if(nota >= 0 && nota <= 10) {
        if(nota >= 6)
            printf("Aprovado.");
        else
            printf("Reprovado.");
    }
    else {
        printf("Por favor, informe uma nota entre 0 e 10.\n");
    }

    return 0;
}
