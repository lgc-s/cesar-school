#include <stdio.h>

int main() {
    int numero1, numero2, soma, subtracao, multiplicacao;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    /*
    Para ser evitado a divisão por zero, que é indefinido por prática nos números reais, um restrição condicional é feita,
    onde o numero2 nunca pode ser igual a zero, esta condicional é "if (numero2 != 0)" como descrito logo abaixo.
    */
    if (numero2 != 0) {
        double divisao_real = (double)numero1 / numero2;

        printf("Divisão real: %.2f\n", divisao_real);
    } else {
        printf("Divisão real: Indefinida (impossível dividir por zero).\n");
    }

    return 0;
}