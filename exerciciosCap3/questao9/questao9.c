#include <stdio.h>

int main() {
    float valor, soma = 0.0, media;
    int quantidade = 0;

    do {
        printf("Digite um valor: ");
        scanf("%f", &valor);
        if (valor >= 0) {
            soma += valor;
            quantidade++;
        }

    } while (valor >= 0);
    if (quantidade > 0) {
        media = soma / quantidade;
    } else {
        media = 0;
    }
    printf("\nQuantidade de valores válidos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);
    printf("Média aritmética: %.2f\n", media);

    return 0;
}