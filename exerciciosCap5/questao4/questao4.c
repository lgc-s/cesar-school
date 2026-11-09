/*
a) O caso base é "N == 0"; e ele retorna (long)1. Já o passo recursivo seria o "n * fatorial(n - 1)" ao chamar várias o fatorial(). Sem o caso base, o ciclo
do passo recursivo chamaria a função eternamente, gerando um stack overflow.

b) Chamadas:

   - fatorial(4) -> chama fatorial(3)
   - fatorial(3) -> chama fatorial(2)
   - fatorial(2) -> chama fatorial(1)
   - fatorial(1) -> chama fatorial(0)
   - fatorial(0) -> atinge o caso base e devolve 1.

   Retornos:
   - fatorial(1) -> calcula 1x1 e devolve 1
   - fatorial(2) -> calcula 2x1 e devolve 2
   - fatorial(3) -> calcula 3x2 e devolve 6
   - fatorial(4) -> calcula 4x6 e devolve 24

c) Acerca da memória, a cada chamada recursiva, um novo registro de ativação é empilhada na pilha de execuções do programa, salvando a ordem de cada chamada
anterior. Sem um caso base para parar o programa, o chamado de funções se repetiria de forma indefinida. gerando um erro crítico de stack overflow, já que a
condição de parada não existiria e sequer seria atendida.
*/

long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}