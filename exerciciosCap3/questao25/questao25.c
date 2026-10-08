#include <stdio.h>

int main() {
    int N;
    int divisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }
    printf("Quantidade de divisores: %d\n", divisores);
    if (N > 1 && divisores == 2) {
        printf("%d é um número primo.\n", N);
    } else {
        printf("%d não é um número primo.\n", N);
    }

    return 0;
}