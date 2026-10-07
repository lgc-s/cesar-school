#include <stdio.h>

int main() {
    int N, i;
    long long atual = 1, anterior = 1, proximo;

    while (N <= 0)
    {
        printf("Digite o número do termo desejado: ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("Digite um valor de N maior que zero...\n");
        }
    }
    printf("\nTermos da sequência de Fibonacci até %d:\n", N);
    for (i = 1; i <= N; i++) {
        if (i == 1 || i == 2) {
            printf("%lld ", 1LL);
        } else {
            proximo = anterior + atual;
            printf("%lld ", proximo);

            anterior = atual;
            atual = proximo;
        }
    }
    printf("\n\nO termo número %d da sequência é: ", N);
    if (N == 1 || N == 2) {
        printf("1\n");
    } else {
        printf("%lld\n", atual);
    }
    
    return 0;
}