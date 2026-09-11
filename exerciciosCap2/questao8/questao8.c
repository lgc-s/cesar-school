#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) == 1) {
        int quadrado = numero * numero;
        double decima_parte = numero / 10.00;

        printf("a) Quadrado: %d\n", quadrado);
        printf("b) Decima parte: %.2f\n", decima_parte);
    } else {
        printf("Erro: Entrada invalida.\n");
    }

    return 0;
}