#include <stdio.h>

int main() {
    int A, B, i, j, divisores;
    int soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    if (A >= B) {
        printf("Erro: A deve ser menor que B!\n");
        return 0;
    }
    printf("\nNumeros primos no intervalo [%d, %d]:\n", A, B);
    for (i = A; i <= B; i++) {
        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }
        if (i > 1 && divisores == 2) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma total dos primos: %d\n", soma);

    return 0;
}