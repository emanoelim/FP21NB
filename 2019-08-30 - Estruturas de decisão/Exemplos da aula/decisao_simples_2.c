#include <stdio.h>

int main(void) {
    int num, divisao;
    printf("Informe um número: ");
    scanf("%d", &num);

    divisao = num / 3;
    printf("Divisao: %d\n", divisao);

    if(num % 3)
        printf("Resto: %d", num % 3);

    return 0;
}
