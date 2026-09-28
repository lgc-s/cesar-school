#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, p, area;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Área do triângulo: %.3f\n", area);
    
    return 0;
}