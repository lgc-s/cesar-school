#include <stdio.h>

int main() {
    double temperatura, resultado;
    int opcao;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temperatura);
            resultado = temperatura * 1.8 + 32;
            printf("Temperatura em Fahrenheit: %.2f F\n", resultado);
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temperatura);
            resultado = temperatura + 273.15;
            printf("Temperatura em Kelvin: %.2f K\n", resultado);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &temperatura);
            resultado = (temperatura - 32) / 1.8;
            printf("Temperatura em Celsius: %.2f C\n", resultado);
            break;
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%lf", &temperatura);
            resultado = temperatura - 273.15;
            printf("Temperatura em Celsius: %.2f C\n", resultado);
            break;
        default:
            printf("Opção invalida!\n");
            break;
    }

    return 0;
}