/*
A estrutura mais adequada dentre as 3 é a for, já que o foco é na previsibilidade,
sabendo o número exato de iterações, além do fato da inicialização, condição e
número exato de incremento podendo ser colocado dentro da própria declaração,
simplificando a estrutura, organização e o número de linhas.
*/

#include <stdio.h>

int main() {
    int i;

    // Versão 1: for
    printf("Versao com for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    // Versão 2: while
    printf("Versao com while:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
    // Versão 3: do-while
    printf("Versao com do-while:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");

    return 0;
}