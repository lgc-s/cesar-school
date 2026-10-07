#include <stdio.h>

int main() {
    int N;

    printf("Digite uma dimensão ímpar (3 a 19): ");
    scanf("%d", &N);
    for (int linha = 1; linha <= N; linha++) {
        for (int coluna = 1; coluna <= N; coluna++) {
            if (linha == coluna || linha + coluna == N + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}