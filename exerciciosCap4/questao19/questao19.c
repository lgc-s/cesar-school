#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite o primeiro lado (A): ");
    scanf("%lf", &A);
    printf("Digite o segundo lado (B): ");
    scanf("%lf", &B);
    printf("Digite o terceiro lado (C): ");
    scanf("%lf", &C);
    if (A > 0 && B > 0 && C > 0 && A < B + C && B < A + C && C < A + B) {
        if (A == B && B == C) {
            printf("Os lados informados formam Triangulo Equilátero!\n");
        }
        else if (A == B || A == C || B == C) {
            printf("Os lados informados formam Triangulo Isósceles!\n");
        }
        else {
            printf("Os lados informados formam Triangulo Escaleno!\n");
        }
    }
    else {
        printf("Erro! Os lados fornecidos nao formam um triangulo.\n");
    }

    return 0;
}