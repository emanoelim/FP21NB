#include <stdio.h>

int main() {
    int num_clientes, i;
    float altura, peso, maior_altura, menor_altura, maior_peso, menor_peso;

    printf("Informe o número de clientes: ");
    scanf("%d", &num_clientes);

    /* lê o primeiro fora do for, para inicializar maior altura,
    menor altura, maior peso e menor peso */
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe o peso: ");
    scanf("%f", &peso);
    maior_altura = altura;
    menor_altura = altura;
    maior_peso = peso;
    menor_peso = peso;

    for(i = 1; i < num_clientes; i++) {
        printf("\n\nInforme a altura: ");
        scanf("%f", &altura);
        printf("Informe o peso: ");
        scanf("%f", &peso);

        if(altura > maior_altura)
            maior_altura = altura;
        if(altura < menor_altura)
            menor_altura = altura;
        if(peso > maior_peso)
            maior_peso = peso;
        if(peso < menor_peso)
            menor_peso = peso;
    }

    printf("\nMaior e menor altura, respectivamente: %.2f, %.2f\n", maior_altura, menor_altura);
    printf("Maior e menor peso, respectivamente: %.2f, %.2f\n", maior_peso, menor_peso);

    return 0;
}

