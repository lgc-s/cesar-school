#include <stdio.h>

int ehPar(int n);

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (ehPar(num)) {
        printf("O numero %d é par.\n", num);
    } else {
        printf("O numero %d é impar.\n", num);
    }

    return 0;
}

int ehPar(int n) {
    return n % 2 == 0;
}