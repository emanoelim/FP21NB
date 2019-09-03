#include <stdio.h>

int main(void) {
    float salario;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    if(salario > 5645.80) {
        salario = salario - 621.04;
    }
    else {
        if(salario <= 1693.72) {
            salario = salario - salario * 0.08;
        }
        else if(salario <= 2822.90) {
            salario = salario - salario * 0.09;
        }
        else {
            salario = salario - salario * 0.11;
        }
    }
    printf("Salário liquido: %.2f", salario);

    return 0;
}
