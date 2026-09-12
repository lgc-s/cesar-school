#include <stdio.h>


int main() {
    float raio, area, volume;
    const float pi = 3.141593;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    area = 4.00 * pi * (raio * raio);
    volume = (4.00 / 3.00) * pi * (raio * raio * raio);
    printf("Raio: %.2f\n", raio);
    printf("Area de superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}