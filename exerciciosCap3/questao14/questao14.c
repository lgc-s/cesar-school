#include <stdio.h>

int main() {
    int i, quadrado;
    int soma = 0;

    for (i = 1; i <= 100; i++) {
        quadrado = i * i;
        printf("%d -> %d\n", i, quadrado);
        soma = soma + quadrado;
    }
    printf("\nSoma total dos quadrados: %d\n", soma);

    return 0;
}