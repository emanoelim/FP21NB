#include <stdio.h>

int main(void) {
    int dividendo, divisor, divisao, resto;
    printf("Informe dividendo e divisor: \n");
    scanf("%d %d", &dividendo, &divisor);

    if(divisor > 0) {
        divisao = dividendo / divisor;
        resto = dividendo % divisor;
        printf("A divisao é: %d\n", divisao);
        if(resto)
            printf("O resto é: %d\n", resto);
    }
    else
        printf("Divisor inválido, informe um divisor maior que 0.");

    return 0;
}
