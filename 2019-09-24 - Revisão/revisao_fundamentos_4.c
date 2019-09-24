#include <stdio.h>

int main() {
    int n1, n2;

    printf("Informe n1: ");
    scanf("%d", &n1);
    printf("Informe n2: ");
    scanf("%d", &n2);

    if(n1 > n2)
        printf("Os numeros estao em ordem decrescente.");
    else if(n1 < n2)
        printf("Os numeros estao em ordem crescente.");
    else
        printf("Os numeros sao iguais.");

    return 0;
}
