#include <stdio.h>

int main(){
    int i, quantidade;
    float multiplicacao, total=0;
    for(i = 1; i <= 5; i++) {
        printf("\nInforme quantas unidades foram compradas do produto %d: ", i);
        scanf("%d", &quantidade);
        if(i == 1)
            multiplicacao = quantidade * 5;
        else if(i == 2)
            multiplicacao = quantidade * 8;
        else if(i == 3)
            multiplicacao = quantidade * 3;
        else if(i == 4)
            multiplicacao = quantidade * 4;
        else
            multiplicacao = quantidade * 3.50;
        total += multiplicacao;
    }
    printf("\nTotal da compra: %.2f\n", total);

    return 0;
}
