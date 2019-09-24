#include <stdio.h>

int main() {
    int num, c, d, u, invertido;

    printf("Informe o número: ");
    scanf("%d", &num);

    if(num > 99 && num < 1000) {
        c = num / 100;
        d = (num % 100) / 10;
        u = num % 10;

        invertido = u * 100 + d * 10 + c;

        printf("O número %d invertido fica %d\n", num, invertido);
    }
    else
        printf("Número não tem 3 dígitos.\n");
    return 0;
}
