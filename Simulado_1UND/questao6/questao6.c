/*
a) O erro de compilação acontecerá porque soma se encontra dentro do laço for,
não sendo declarado fora dele, limitando seu escopo de uso, e fazendo o printf
falhar de ser compilado.

b) Em virtude da presença do continue e break dentro do laço for, apenas o 1⁰, 2⁰,
3⁰, 4⁰, 6⁰ e o 7⁰ laço de iteração serão executados. O código não continua se o 
valor for 5 por causa do continue, que pula o laço para a próxima iteração, seguindo
normalmente até quando o laço é quebrado quando o valor i é 8, ignorando o resto do 
código.

c) Soma final = 115
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}