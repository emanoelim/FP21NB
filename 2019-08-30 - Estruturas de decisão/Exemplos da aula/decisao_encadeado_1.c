/*
De 9.0 a 10.0 = A
De 7.5 a 8.9 = B
De 6.0 a 7.4 = C
De 4.0 a 5.9 = D
De 0.0 a 3.9 = E

*/

#include <stdio.h>

int main(void) {
    float nota;
    printf("Informe a nota: ");
    scanf("%f", &nota);

    if(nota <= 3.9) {
        printf("Conceito E.");
    }
    else if(nota <= 5.9) {
        printf("Conceito D.");
    }
    else if(nota <= 7.4) {
        printf("Conceito C.");
    }
    else if(nota <= 8.9) {
        printf("Conceito B.");
    }
    else {
        printf("Conceito A.");
    }

    return 0;
}
