#include <stdio.h>

int main() {
    float raio, area, circunferencia;
    const float pi = 3.141593;

    printf("Digite o valor do raio do círculo: ");
    if (scanf("%f", &raio) != 1 || raio < 0) {
        printf("Erro: Entrada inválida!\n");
        return 1;
    }
    area = pi * (raio * raio);
    circunferencia = 2.00 * pi * raio;
    printf("Área: %.2f\n", area);
    printf("Circunferência: %.2f\n", circunferencia);

    return 0;
}