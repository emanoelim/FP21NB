#include <stdio.h>
#include <math.h>

int main() {
    float area;
    float litros_necessarios;
    float latas_18;
    float latas_36;

    printf("Informe a área da casa: ");
    scanf("%f", &area);

    litros_necessarios = area / 6;
    litros_necessarios = ceil(litros_necessarios);

    printf("Considerando latas de 18l:\n");
    latas_18 = litros_necessarios / 18;
    latas_18 = ceil(latas_18);
    printf("São necessárias %.0f latas de 18l\n", latas_18);

    printf("\nConsiderando latas de 3.6l:\n");
    latas_36 = litros_necessarios / 3.6;
    latas_36 = ceil(latas_36);
    printf("São necessárias %.0f latas de 3,6l\n", latas_36);

    printf("\nConsiderando latas de 18l e 3.6l:\n");
    latas_18 = (int)litros_necessarios / 18;
    latas_36 = ((int)litros_necessarios % 18) / 3.6;
    latas_36 = ceil(latas_36);

    if(latas_36 * 25 > 80) {
        latas_18 += 1;
        latas_36 = 0;
    }
    printf("São necessárias %.0f latas de 18 e %.0f latas de 3,6l\n", latas_18, latas_36);
}
