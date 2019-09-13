#include <stdio.h>
#include <math.h>

int main() {
    int i;

    // imprimindo os números de 0 a 10 - ordem crescente
    for(i = 0; i < 10; i++)
        printf("%d\t", i);
    printf("\n");

     // imprimindo os números de 0 a 10 - ordem decrescente
    for(i = 9; i >= 0; i--)
        printf("%d\t", i);
    printf("\n");

    // imprimir os números de 0 até 20, de 2 em 2
    for(i = 0; i < 20; i+=2)
        printf("%d\t", i);
    printf("\n");

    // imprimir os números de 0 até 30, de 3 em 3
    for(i = 0; i < 30; i+=3)
        printf("%d\t", i);
    printf("\n");

    // imprimir os 10 primeiros termos de uma PG com q = 3
    for(i = 1; i < pow(2, 10); i*=2)
        printf("%d\t", i);
    printf("\n");

    // imprimir os 10 primeiros termos de uma PG com q = 3
    for(i = 1; i < pow(3, 10); i*=3)
        printf("%d\t", i);
    printf("\n");

    return 0;
}
