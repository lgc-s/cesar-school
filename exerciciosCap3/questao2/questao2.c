/*
a) o erro acontecerá porque "soma" não está sendo reconhecido, isso é
porque ele só foi declarado dentro de for, o que faz ele não existir
em um escopo por fora do for.

b) Estaria conceitualmente errado devido ao "int soma = 0", que sempre
reinicia a soma para 0 a cada iteração do laço, quando a proposta do
código era agregar a soma já existente, o que fará apenas a última
iteração funcionar, fora o fato de sempre imprimir a cada iteração.

c) O código correto segue a seguinte estrutura abaixo. A principal
correção feita foi mover a declaração de soma para ser declarado no
escopo do "main()", o que faz ele ser reconhecido universalmente e
o laço de repetição for incrementa por iteração regularmente, gerando
o valor desejado para o código e prevenindo qualquer erro de compilação.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}