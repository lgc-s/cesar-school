#include <stdio.h>
#include <math.h>

int main() {
    float lado_a, lado_b, hipotenusa;

    printf("Digite o valor do primeiro cateto (Lado A): ");
    scanf("%f", &lado_a);
    printf("Digite o valor do segundo cateto (Lado B): ");
    scanf("%f", &lado_b);
    hipotenusa = sqrt(pow(lado_a, 2.00) + pow(lado_b, 2.00));
    printf("O comprimento da hipotenusa e: %.2f\n", hipotenusa);

    return 0;
}