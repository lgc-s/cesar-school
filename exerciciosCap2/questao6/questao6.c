/*
a) As Diferenças no fluxo, na atribuição e nos valores impressos envolvem o seguinte; No Operador Prefixado (++N), o incremento acontece antes
da avaliação e atribuição do valor, fazendo com que o valor N seja acrescido em 1 e em seguida, o n já com o novo valor é atribuído, ao
X, já no Operador Pós-fixado (M++), o valor m é atribuído a Y, e só depois, é acrescido, tendo seu valor original alterado, porém com o valor
original sendo efetuado no Y.

Valores Impressos (Isso também pode ser visto na execução):
Trecho A: n = 6, x = 6
Trecho B: m = 6, y = 5


b) A instrução mostrada gera um comportamento indefinido (Undefined Behavior) em C por causa que a ordem dos argumentos de um função,
como o printf() não são por padrão especificadas, fazendo com que o compilador possa compilar da esquerda para a direita ou da direita para
a esquerda. Outra causa de que faz o código estar como (Undefined Behavior) é a ausência de um ponto de sequência, pois em N, através do
do efeito colateral de N++, e a leitura da mesma variável em outros argumentos como n e n+1 fica sem sequência e definição primária de
comportamento. No geral, como C não define um comportamento geral, como a ordem de processamento e nem o momento exato do processamento de 
N++, isso faz com que o compilador gere resultados diferentes a cada execução. 
*/

#include <stdio.h>

int main() {
    int n = 5;
    int x = ++n;
    int m = 5;
    int y = m++;

    printf("Trecho A: n = %d, x = %d\n", n, x);
    printf("Trecho B: m = %d, y = %d\n", m, y);

    return 0;
}