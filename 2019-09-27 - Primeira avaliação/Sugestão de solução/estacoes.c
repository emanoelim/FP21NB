/*
Outono: 20 de março
Inverno: 21 de junho
Primavera: 23 de setembro
Verão: 22 de dezembro
*/
#include <stdio.h>

main() {
    int dia, mes;
    printf("Informe o dia e mês no formato: dd/mm: ");
    scanf("%d/%d", &dia, &mes);

    if (mes == 3 && dia >= 20) // a partir de 20 de março
        printf("Outono");
    else if(mes == 4 || mes == 5) // abril ou maio
        printf("Outono");
    else if(mes == 6 && dia < 21) // até 21 de junho
        printf("Outono");
    else if(mes == 6) // qualquer outro dia de junho
        printf("Inverno");
    else if(mes == 7 || mes == 8) // julho ou agosto
        printf("Inverno");
    else if(mes == 9 && dia < 23) // até 23 de setembro
        printf("Inverno");
    else if(mes == 9) // qualquer outro dia de setembro
        printf("Primavera");
    else if(mes == 10 || mes == 11) // outubro ou novembro
        printf("Primavera");
    else if(mes == 12 && dia < 22) // até 22 de dezembro
        printf("Primavera");
    else // qualquer outro dia
        printf("Verao");
}
