#include <stdio.h>

int main(void) {
    float nota, nota_sub;
    printf("Informe a sua nota: ");
    scanf("%f", &nota);
    printf("Informe a nota da sub: ");
    scanf("%f", &nota_sub);
    if(nota_sub > nota)
        nota = nota_sub;
    printf("Nota final: %.2f", nota);

    return 0;
}
