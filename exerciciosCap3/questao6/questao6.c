/*
a) O valor de x é 6 ao final do código (impresso como: "Valor final de x = 6")

b) Cada iteração segue-se assim:

Comparação:

Incremento 1: 0 < 5 (Verdadeiro) - x após x++ = 1
Incremento 2: 1 < 5 (Verdadeiro) - x após x++ = 2
Incremento 3: 2 < 5 (Verdadeiro) - x após x++ = 3
Incremento 4: 3 < 5 (Verdadeiro) - x após x++ = 4
Incremento 5: 4 < 5 (Verdadeiro) - x após x++ = 5
Incremento 6: 5 < 5 (Falso, Parou) - x após x++ = 6

x é sempre incrementado após a comparação, então quando 5 < 5 retornou falso,
x++ incrementou mais uma vez para 6.

c) Segue abaixo fora dos comentários o laço while sem estar com o corpo vazio,
sendo claro e explícito por enquanto é seguido o resultado final de x.
*/

#include <stdio.h>

int main() {
    int x = 0;

    /*
    while (x++ < 5);
    printf("Valor final de x = %d\n", x);
    */

    while (x < 5) {
        x++;
    }
    x++;
    printf("Valor final de x = %d\n", x);

    return 0;
}

