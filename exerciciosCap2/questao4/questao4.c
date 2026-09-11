/*
Quando a primeira etapa (A += B + C) é realizada, A é somado da B+C, os cálculos seguem então assim:

A += B + C
1 += 2 + 3
1 += 5
A += 6 (A Partir de Agora, A será 6 para os próximos cálculos)


Quando a segunda etapa (B *= C = D + 2) é realizada, B é multiplicado por C, que é resultante de D+2), os cálculos seguem então assim:

B *= C = D + 2
2 *= C = 4 + 2
2 *= C = 6
2 *= 6
B = 12 (A Partir de Agora, B será 12 para os próximos cálculos e C será 6 para os próximos cálculos)


Quando a terceira etapa (D %= A + A + A) é realizada, D é o resto da divisão de D com A+A+A, os cálculos seguem então assim:

D %= A + A + A
4 %= 6 + 6 + 6
4 %= 18
D = 4 (D permanece sendo 4 para os próximos cálculos)


Quando a quarta etapa (D -= C -= B -= A;) é realizada, A é subtraído de B, que o resultado subtrai C, que o novo subtrai o D, os cálculos seguem então assim:

D -= C -= B -= A
4 -= 6 -= 12 -= 6
4 -= 6 -= 6
4 -= 0
D = 4 (D permanece sendo 4. B será 6 e C será 0 no próximo cálculo)


Quando a quinta é última etapa (A += B += C += 7;) é realizada, A é somado com B, que é somado com C, que é somado com 7:

A += B += C += 7
6 += 6 += 0 += 7
6 += 6 += 7
6 += 13
A = 19 (A Partir de Agora, A é 19, B é 13 e C é 7)


Depois de todas as etapas - A: 19, B: 13, C: 7 e D: 4
*/

#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;

    a += b + c;
    b *= c = d + 2;
    d %= a + a + a;
    d -= c -= b -= a;
    a += b += c += 7;
    printf("A: %d\nB: %d\nC: %d\nD: %d\n", a, b, c, d);

    return 0;
}