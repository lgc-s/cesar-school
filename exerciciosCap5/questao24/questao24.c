/*
Ao utilizar o #define DEBUG, o modo debug é ativado, e assim, tudo que existir entre #ifdef DEBUG e #endif, durante a execução, o programa imprime o printf
na qual registra a soma parcial de cada iteração, facilitando a depuração e o acompanhamento do progresso da execução, já que o pré-processador considerou
essa linha com o DEBUG ativado.

Ao não utilizar o #define DEBUG, tudo que está entre #ifdef DEBUG e #endif é ignorado pelo pré-processador, fazendo o DEBUG não acontecer e apenas o
resultado final da soma ser exibido, gerando um binário otimizado que não guarda instruções ignoradas.
*/

#include <stdio.h>

// Defina DEBUG para ativar a depuração ou comente para desativá-la
#define DEBUG

int somaAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
        #ifdef DEBUG
        printf("Iteração %d: valor parcial da soma = %d\n", i, soma);
        #endif
    }

    return soma;
}

int main() {
    int n = 5;
    int resultado = somaAteN(n);
    
    printf("Soma total de 1 até %d = %d\n", n, resultado);
    
    return 0;
}