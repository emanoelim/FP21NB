#include <stdio.h>

int main(void) {
    int n1, n2, maior, menor;
    printf("Informe o n1: ");
    scanf("%d", &n1);
    printf("Informe o n2: ");
    scanf("%d", &n2);
    if(n1 > n2) {
        maior = n1;
        menor = n2;
    }
    else {
        maior = n2;
        menor = n1;
    }

    if(maior % menor) { // se o resto for diferente de 0
        printf("Nao divisível.");
    }
    else {
        printf("Divisivel.");
    }

    return 0;
}
