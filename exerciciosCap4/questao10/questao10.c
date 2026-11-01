#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número e PAR.\n");
    }
    else {
        printf("O número e ÍMPAR.\n");
    }
    if (numero > 0) {
        printf("O número e POSITIVO.\n");
    }
    else if (numero < 0) {
        printf("O número e NEGATIVO.\n");
    }
    else {
        printf("O número e ZERO.\n");
    }

    return 0;
}