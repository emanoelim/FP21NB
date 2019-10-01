#include <stdio.h>

int main(void) {
    float rendimento, area, litros_tinta, p_solvente, litros_solvente, latas_tinta, latas_solvente;

    printf("Rendimento do litro de tinta em m²: ");
    scanf("%f", &rendimento);
    printf("Área da casa: ");
    scanf("%f", &area);
    printf("Percentual de solvente por litro de tinta: ");
    scanf("%f", &p_solvente);

    litros_tinta = area / rendimento;
    litros_tinta += (litros_tinta * 0.1);

    litros_solvente = litros_tinta * p_solvente / 100;

    latas_tinta = ceil(litros_tinta / 3.6);
    latas_solvente = ceil(litros_solvente / 0.9);

    printf("%.0f latas de tinta e %.0f latas de solvente serão necessárias.", latas_tinta, latas_solvente);
}
