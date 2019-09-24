#include <stdio.h>

int main() {
    int i, codigo, habitantes, veiculos, codigo_cidade_maior_media, total_habitantes, total_veiculos;
    float media_cidade, maior_media, media_total;

    maior_media = 0;
    total_habitantes = 0;
    total_veiculos = 0;
    for(i = 1; i <= 5; i++) {
        printf("\n\nInforme o codigo da cidade %d: ", i);
        scanf("%d", &codigo);
        printf("Informe o número de habitantes: ");
        scanf("%d", &habitantes);
        printf("Informe o numero de veiculos: ");
        scanf("%d", &veiculos);

        media_cidade = (float)veiculos / habitantes;
        if(media_cidade > maior_media) {
            maior_media = media_cidade;
            codigo_cidade_maior_media = codigo;
        }

        total_habitantes += habitantes;
        total_veiculos += veiculos;

        printf("A media de veiculos por pessoa na cidade %d é %.2f\n", codigo, media_cidade);
    }

    media_total = (float)total_veiculos / total_habitantes;

    printf("\nA cidade com a maior media de veiculos / pessoas é: %d\n", codigo_cidade_maior_media);
    printf("A media total de veiculos / pessoas é: %.2f\n", media_total);

    return 0;
}
