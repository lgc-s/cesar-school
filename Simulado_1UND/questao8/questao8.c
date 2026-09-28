#include <stdio.h>
#include <math.h>

int main() {
    const double pi = 3.14159265;
    double area, r, volume;

    printf("Digite o valor do raio: ");
    scanf("%lf", &r);
    area = 4 * pi * pow(r, 2);
    volume = (4.0 / 3.0) * pi * pow(r, 3);
    printf("Área da superfície: %.3lf\n", area);
    printf("Volume da Esfera: %.3lf\n", volume);

    return 0;
}