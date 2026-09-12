/*
O número inteiro que é impresso no programa, é referente ao valor decimal do caractere dentro da ASCII.
Em C, "char" tem 1 byte de memória e ele armazena dentro dele um código numérico, na qual ao usar %c em um char, 
imprime o valor normalmente como um usuário comum pretende, mas, ao digitar %d para o char, ele imprime o valor
numérico na qual o caractere é armazenado em ASCII.
*/

#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("O caractere '%c' possui o codigo ASCII: %d\n", caractere, caractere);

    return 0;
}