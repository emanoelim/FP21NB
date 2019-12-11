#include <stdio.h>
#include <math.h>

int conta_digitos(int n);
int narcisista(int n, int n_digitos);

int main(void) {
    int n, n_digitos, eh_narcisista;
    do {
        printf("\ninforme um num. para testar: ");
        scanf("%d", &n);
        if(n >= 0) {
           n_digitos = conta_digitos(n);
           printf("O num. tem %d digitos.\n", n_digitos);
           eh_narcisista = narcisista(n, n_digitos);
           if(eh_narcisista)
                printf("O num. informado é narcisista\n");
           else
                printf("O num. informado não é narcisista\n");
        }
    } while(n >= 0);
    return 0;
}

int conta_digitos(int n) {
    int cont = 1;
    while(n / 10) {
        n = n / 10;
        cont++;
    }
    return cont;
}

int narcisista(int n, int n_digitos) {
    int digito;
    int somatorio = 0;
    int n_aux = n;
    while(n_aux > 0) {
        digito = n_aux % 10;
        somatorio += pow(digito, n_digitos);
        n_aux = n_aux / 10;
    }
    if(somatorio == n)
        return 1;
    else
        return 0;
}
