/*
a) O laço será executado 5 vezes antes de encerrar.

b) O que é impresso:

i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10

c) Segue abaixo fora dos comentários o laço sendo reproduzido como while:
*/

#include <stdio.h>

int main() {
    int i = 0, j = 10;

    /*
    for (i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    }
    */

    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    return 0;
}
