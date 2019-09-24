#include <stdio.h>

int main() {
    int participantes, i, idade, soma_idade, cont_h, cont_m, cont_com_xp, cont_sem_xp;
    char xp, sexo;
    float percentual_m, percentual_h, pretencao, soma_pretencao_com_xp, soma_pretencao_sem_xp, media_pretencao_com_xp, media_pretencao_sem_xp, media_idade;

    cont_h = 0;
    cont_m = 0;
    cont_com_xp = 0;
    cont_sem_xp = 0;
    soma_idade = 0;

    printf("Quantas pessoas participaram do processo seletivo? ");
    scanf("%d", &participantes);
    for(i = 0; i < participantes; i++) {
        printf("\n\nA pessoa tem experiência (s ou n)? ");
        scanf(" %c", &xp); // o espaço na string " %c" faz o \n digitado acima ser consumido - substitui o fflush
        printf("Qual o sexo da pessoa (f ou m)? ");
        scanf(" %c", &sexo); // o espaço na string " %c" faz o \n digitado acima ser consumido - substitui o fflush
        printf("Qual a idade da pessoa? ");
        scanf("%d", &idade);
        printf("Qual a pretenção salarial da pessoa? ");
        scanf("%f", &pretencao);

        soma_idade += idade;

        if(xp == 's' || xp == 'S') {
            cont_com_xp++;
            soma_pretencao_com_xp += pretencao;
        }
        else if(xp == 'n' || xp == 'N') {
            cont_sem_xp++;
            soma_pretencao_sem_xp += pretencao;
        }
        else
            printf("Opção inválida, responda s ou n.\n");

        if(sexo == 'f' || sexo == 'F')
            cont_m++;
        else if(sexo == 'm' || sexo == 'M')
            cont_h++;
        else
            printf("Opção inválida, responda f ou m.\n");
    }

    media_idade = (float)soma_idade / participantes;
    percentual_h = (float)cont_h / participantes * 100;
    percentual_m = (float)cont_m / participantes * 100;
    media_pretencao_com_xp = soma_pretencao_com_xp / cont_com_xp;
    media_pretencao_sem_xp = soma_pretencao_sem_xp / cont_sem_xp;

    printf("\nA idade média dos participantes é: %.2f\n", media_idade);
    printf("O percentual de homens é: %.2f\n", percentual_h);
    printf("O percentual de mulheres é: %.2f\n", percentual_m);
    printf("A pretenção salarial média das pessoas com experiência é: %.2f\n", media_pretencao_com_xp);
    printf("A pretenção salarial média das pessoas sem experiência é: %.2f\n", media_pretencao_sem_xp);

    return 0;
}
