#include <stdio.h>

int main(void) {
    char sabor;
    printf("Informe o sabor: ");
    scanf("%c", &sabor);

    if(sabor >= 'A' && sabor <= 'Z')
        sabor = sabor + 32;

    switch(sabor) {
        case 'c':
            printf("Pizza de calabresa\n");
            break;
        case 'm':
            printf("Pizza de muçarela\n");
            break;
        case 'b':
            printf("Pizza de bacon\n");
            break;
        default:
            printf("Opção inválida\n");
    }
    return 0;
}
