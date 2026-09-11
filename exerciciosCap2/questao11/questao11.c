#include <stdio.h>

int main() {
    const double pi = 3.141593;
    double graus, radianos;

    printf("Digite o valor do ângulo em graus: ");
    scanf("%lf", &graus);
    radianos = graus * (pi / 180.00);
    printf("Em radianos: %.6f rad\n", radianos);

    return 0;
}