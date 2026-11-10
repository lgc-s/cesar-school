#include <stdio.h>

void contagem(int n) {
    if (n == 0) {
        return;
    }

    contagem(n - 1);
    printf("%d\n", n); // O printf fica após a chamada recursiva. fazendo com que o 1 seja o primeiro a imprimir e posteriormente de forma crescente os outros.
}

int main() {
    int n;

    printf("Digite um número positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        contagem(n);
    } else {
        printf("Erro! o número digitado não é positivo.");
        return 1;
    }

    return 0;
}