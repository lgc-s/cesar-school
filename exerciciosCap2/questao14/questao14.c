#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, semiPerimetro, area;

    printf("Digite os três lados do triângulo (Digite por exemplo:'a b c'): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada inválida.\n");
        return 1;
    }
    if (a + b > c && a + c > b && b + c > a) {
        semiPerimetro = (a + b + c) / 2.00;
        area = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));
        printf("Semi-perímetro (p): %.2lf\n", semiPerimetro);
        printf("Área do triângulo: %.2lf\n", area);
    } else {
        printf("Erro: Os lados informados não formam um triângulo válido.\n");
    }

    return 0;
}