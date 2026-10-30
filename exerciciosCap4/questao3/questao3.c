/*
a) A segunda linha faz uso de um operador ternário (? :), na qual valida
a condição booleana (media >= 7.0). Quando a média é igual a 6.8, o
operador seleciona o falso, que é o depois de ":", fazendo com que o
caractere que retorne seja o "R"

b) A estrutura escrita como if-else fica descrito como no código abaixo:

c) Não, pois em casos de blocos de if-else que exigem diversos comandos,
várias instruções e estruturas complexas que geram uma ramificação própria,
o operador ternário não consegue funcionar desde que ele projeta e retorna apenas
uma única expressão como resultado de cada caso.
*/

#include <stdio.h>

int main() {
    float media, nota1, nota2;
    char situacao;

    /*
    media = (nota1 + nota2) / 2.0;
    situacao = (media >= 7.0) ? 'A' : 'R';
    */
    if (media >= 7.0) {
        situacao = 'A';
    } else {
        situacao = 'R';
    }
    printf("%c\n", situacao);

    return 0;
}