#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// gerar números de 100 até 500

int main(void) {
    srand(time(NULL));
    int vetor[50];
    int i;
    for(i = 0; i < 50; i++) {
        vetor[i] = rand() % (500 - 100) + 100 + 1;
    }

    for(i = 0; i < 50; i++) {
        printf("%d\t", vetor[i]);
    }

    return 0;
}
