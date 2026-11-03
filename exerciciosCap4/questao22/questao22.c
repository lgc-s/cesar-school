#include <stdio.h>

int main() {
    float valor, imposto, precoFinal;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);
    printf("\n1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    printf("Digite o código do estado: ");
    scanf("%d", &estado);
    switch (estado) {
        case 1:
            imposto = 0.07;
            break;
        case 2:
            imposto = 0.12;
            break;
        case 3:
            imposto = 0.15;
            break;
        case 4:
            imposto = 0.08;
            break;
        default:
            printf("\nCódigo de estado inválido!\n");
            return 0;
    }
    precoFinal = valor + (valor * imposto);
    printf("\nPreço final: R$ %.2f\n", precoFinal);

    return 0;
}