#include <stdio.h>

int main(void) {
    float nota;
    int trabalho;
    printf("Informe a nota: ");
    scanf("%f", &nota);
    printf("Informe 0 ou 1 se foi feito o trabalho: ");
    scanf("%d", &trabalho);
    if(trabalho) { // if(trabalho == 1)
        nota = nota + 1; // nota++;
    }
    printf("Nota: %.2f", nota);
}
