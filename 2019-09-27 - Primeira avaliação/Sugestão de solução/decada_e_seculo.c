#include <stdio.h>

int main() {
    int ano, seculo, decada, resto_seculo, resto_decada;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    seculo = ano / 100;
    resto_seculo = ano % 100;
    if(resto_seculo)
        seculo++;

    decada = resto_seculo / 10;
    resto_decada = resto_seculo % 10;
    if(resto_decada)
        decada++;
    if(decada == 0)
        decada = 10;

    printf("%d - pertence à %da década do século %d\n", ano, decada, seculo);

    return 0;
}
