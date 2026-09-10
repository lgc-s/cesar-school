/*
a) A biblioteca <conio.h> era originalmente usado para MSDOS (Como o Compilador Turbo C), com seu suporte ao seu 
sucessor, o Windows, sendo muito limitado, sem seguir os padrões globais do ANSI C ou ISO C. Sistemas Unix não possuem
o cabeçalho dele registrado, o que exige adaptações e portabilidades para funcionarem.

b) Na entrada de caracteres, getchar() e fgetc(stdin) leem um caractere em um fluxo de entrada de input, a saída segue
o mesmo padrão, putchar(c) e fputc(c, stdout)

c)
*/

#include <stdio.h>

int main() {
    int c;

    printf("Digite um caractere: ");
    if (scanf(" %c", (char *)&c) == 1) {
        printf("Caractere lido com sucesso: '%c'\n", c);
    }

    return 0;
}