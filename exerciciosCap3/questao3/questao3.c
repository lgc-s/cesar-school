/*
a) "32" -> "18" -> "9" -> "4" -> "2" -> "1"

b) ch+1 soma um char que é lido pelo getch() e soma por 1, gerando uma
alteração no código ASCII, por exemplo, no caso de um print com "%c", ao
digitar "a", o getch() lê o código e assim a soma com 1 passa pro próximo
endereço que é "b" antes de dar printf(). "ch = getch()" é 
obrigatório para o código, pois é exclusivamente a partir dele na qual
a leitura de uma tecla é possível, o com char se tornado no que é lido 
função "getch()".

c) Um forma programática de interromper a execução infinita sem mudar a
semântica proposta é criando um break; e um getch(), que encerra
a execução no momento que uma tecla (exemplo: "X") é pressionada, caso
ela não seja tocada, mais uma iteração acontece.
*/

#include <stdio.h>

int main() {
    int a;
    char ch;

    for (a = 36; a > 0; a /= 2) {
        printf("%d\t", a);
    }
    for (; (ch = getch()) != 'X' ;) {
        printf("%c", ch + 1);
    }
    for (;;) {
        printf("Laço Infinito\n");
            ch = getch();
        if (ch == 'X') {
            break;
        }
    }

    return 0;
}