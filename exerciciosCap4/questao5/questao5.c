/*
a) A saída exata é:

"a = 0, b = 5, c = 8"

O incremento ++b foi ignorado pois a avaliação passou já na primeira 
condição, gerando uma avaliação de curto-circuito.

b) O curto circuito ocorre quando o compilador interrompe a checagem
após o resultado lógico ser determinado mesmo que haja condições
pendentes para ser checada, mas que ainda não altera o resultado lógico.
no caso de E (&&), quando o primeiro dá falso, o resultado já retorna
falso e pula a segunda condição sem ser avaliado, no caso do OU (||),
a segunda condição sempre é pulada quando a primeira é verdadeira,
fazendo esta segunda ser ignorada.

c) Como a primeira condição é verdadeira, o ou (||) tem um curto
circuito, o incremendo ++b não é executado, portanto o b permanece
sendo 5 e a adição de c em 10 é feita, fazendo b ser 5 e c ser 20.
*/

#include <stdio.h>

int main() {
    int a = 0, b = 5, c = 10;
    

     /*(a != 0 && ++b > 5)*/
    if (a == 0 || ++b > 5)
        c += 10;
    else
        c -= 2;
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}