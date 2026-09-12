#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
    ms = kmh / 3.60f;
    printf("%.2f km/h equivale a %.2f m/s\n", kmh, ms);

    return 0;
}