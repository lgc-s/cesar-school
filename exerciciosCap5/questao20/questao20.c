#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    if (ehPrimo(n)) {
        printf("%d é primo.\n", n);
    } else {
        printf("%d não é primo.\n", n);
    }
    printf("\nNúmeros primos de 1 até 50 são:\n");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}