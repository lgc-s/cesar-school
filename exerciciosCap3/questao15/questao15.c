#include <stdio.h>

int main() {
    int NUM;
    int acerto = 0;

    printf("Digite um número limite inteiro positivo: ");
    scanf("%d", &NUM);
    for (int i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            acerto = 1;
        }
    }
    if (acerto == 0) {
        printf("Nenhum número satisfaz a condicao.");
    }
    printf("\n");

    return 0;
}