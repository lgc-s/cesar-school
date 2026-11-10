#include <stdio.h>
#include "areas.h"

int main(void) {
    double raio, baseRet, altRet, baseTri, altTri;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);
    printf("Digite a base e altura do retângulo (n1 n2): ");
    scanf("%lf %lf", &baseRet, &altRet);
    printf("Digite a base e altura do triângulo (n1 n2): ");
    scanf("%lf %lf", &baseTri, &altTri);
    printf("Área do Círculo: %.2f\n", A_CIRC(raio));
    printf("Área do Retângulo: %.2f\n", A_RET(baseRet, altRet));
    printf("Área do Triângulos: %.2f\n", A_TRI(baseTri, altTri));

    return 0;
}