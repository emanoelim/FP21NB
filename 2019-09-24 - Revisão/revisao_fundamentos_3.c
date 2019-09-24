#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Informa dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if(ano >= 0 && ano <= 2019) {
        if(mes >= 1 && mes <= 12) {
            if(mes == 2 && (dia < 1 || dia > 29))
                printf("A data e invalida, o mes deveria ter entre 1 e 29 dias.");
            else if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia < 1 || dia > 31))
                printf("A data e invalida, o mes deveria ter entre 1 e 31 dias.");
            else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia < 1 || dia > 30))
                printf("A data e invalida, o mes deveria ter entre 1 e 30 dias.");
            else
                printf("A data e valida.");
        }
        else
            printf("A data e invalida, verifique o mes.");
    }
    else
        printf("A data e invalida, verifique o ano.");

    return 0;
}
