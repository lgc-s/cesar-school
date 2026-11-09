/*
a) A saída de SQR(2+3) é 25 e a saída de DOBRO(2+3) é 8. Os resultados são diferentes no comportamento pois em SQR(2+3) as somas de 2+3 são realizadas antes da
multiplicação em virtude dos parênteses de proteção, fazendo ficar 5*5 na hora de multiplicar pois 2+3 foram somados em ambos x, então o resultado é 25. Já em
DOBRO(2+3), a interpretação do compilador fica sem proteção, fazendo o cálculo ser 2+3*2, multiplicando 3*2 e não realizando a soma 2+3, o resultado final é 8.

b) #define é uma definição pré-processador, portanto ele não usa a convenção de ";", letras maiúscula são usadas para facilitar a visão de macros e constantes.

c) Está incorreto devido ao espaço entre PRN e (n), fazendo o pré-processador interpretar a macro como sem argumentos, já que um espaço encerra a declaração.
*/

#include <stdio.h>

#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2

int main() {
    printf("%d\n", SQR(2+3));
    printf("%d\n", DOBRO(2+3));
    return 0;
}