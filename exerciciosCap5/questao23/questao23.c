/*
A macro comentada no código realizou a substituioção sem avaliar a expressão, gerando 2+3*2 e resultando em 8. Já na função dobro(x), ela já lê e processa o
valor como 5*2 (a soma de 2+3 foi realizada), para um macro ter um comportamento como o da função, um proteção em parênteses é necessária, fazendo ficar sendo
interpretado com o (2+3)*2 pela versão corrigida do macro, seguindo o cálculo igual a função.
*/

#include <stdio.h>

/* 
#define DOBRO(x) x*2 (Sem proteção) 
*/

#define DOBRO(x) ((x)*2) // Correto

int dobro(int x) {
    return x * 2;
}

int main(void) {
    printf("DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("dobro(2+3) = %d\n", dobro(2+3));

    return 0;
}