#include <stdio.h>

int main() {
    int num_participantes, i;
    int pessimo = 0;
    int ruim = 0;
    int regular = 0;
    int bom = 0;
    int otimo = 0;
    float nota;

    printf("Quantos clientes participaram? ");
    scanf("%d", &num_participantes);
    for(i = 0; i < num_participantes; i++) {
        printf("\n\nComo o cliente %d o serviço?\n", i+1);
        printf("0 até 2,0 - péssimo\n");
        printf("2,1 até 4,0 - ruim\n");
        printf("4,1 até  6,0 - regular\n");
        printf("6,1 até 8,0 - bom\n");
        printf("8,1 até 10,0 - ótimo\n");
        printf("Sua nota: ");
        scanf("%f", &nota);

        if(nota >= 0 && nota <= 2)
            pessimo++;
        else if(nota <= 4)
            ruim++;
        else if(nota <= 6)
            regular++;
        else if(nota <= 8)
            bom++;
        else if(nota <= 10)
            otimo++;
        else
            printf("Informe um valor deo 0 até 10.\n");
    }
    printf("\nResultado da pesquisa:\n");
    printf("%d participantes\n", num_participantes);
    printf("Péssimo: %d voto(s)\n", pessimo);
    printf("Ruim: %d voto(s)\n", ruim);
    printf("Regular: %d voto(s)\n", regular);
    printf("Bom: %d voto(s)\n", bom);
    printf("Ótimo: %d voto(s)\n", otimo);

    return 0;
}
