#include <stdio.h>

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n); // O printf fica antes da chamada recursiva. o 5 é o primeiro a sair e a cada chamada, vai decrescendo.
    contagem(n - 1);
}

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        contagem(n);
    } else {
        printf("Erro! o número digitado não é positivo.");
        return 1;
    }

    return 0;
}