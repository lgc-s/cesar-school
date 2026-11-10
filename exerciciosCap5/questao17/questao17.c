#include <stdio.h>

long fatorialIterativo(int n) {
    long resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * fatorialRecursivo(n - 1);
}

int main() {
    int n;
    long iterativo, recursivo;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erro! o número não pode ser negativo.\n");
        return 1;
    }
    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);
    printf("Fatorial iterativo: %ld\n", iterativo);
    printf("Fatorial recursivo: %ld\n", recursivo);
    if (iterativo == recursivo) {
        printf("Os resultados coincidem!\n");
    } else {
        printf("Os resultados são diferentes!\n");
    }

    return 0;
}