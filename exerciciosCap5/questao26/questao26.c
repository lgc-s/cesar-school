/*
Quando você coloca valores imensos para a quantidade de termos da sequência de Fibonacci, a cada chamada, duas novas chamadas são criadas e quanto maior o 
termo final, maior é a quantidade de chamadas geradas exponencialmente, isso em virtude de uma redundância, por exemplo, se n for 10, ele chama 10-1, que chama
9-1, que chama 8-1, e também 10-2, 9-2, 8-2 e assim por diante, fazendo a proporção crescer 2^n a cada termo a mais, pois os valores encontrado anteriormente
em termos iniciais não são salvos, fazendo termos como fibonacci(5) processar fibonacci(3) 2 vezes, fibonacci(2) 3 vezes, fibonacci(1) 5 vezes e assim não
havendo reaproveitamente e começando uma cascata em massa de chamadas recalculando a mesma coisa em um processo cansativo de voltar a cada -1 e -2 para obter
o resultado preciso.
*/

#include <stdio.h>

long fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int termos;

    printf("Digite a quantidade de termos da sequência de Fibonacci: ");
    if (scanf("%d", &termos) == 1 && termos >= 0) {
        printf("Sequência de Fibonacci até o termo %d:\n", termos);
        for (int i = 0; i < termos; i++) {
            printf("%ld ", fibonacci(i));
        }
        printf("\n");
    } else {
        printf("Entrada inválida.\n");
    }

    return 0;
}