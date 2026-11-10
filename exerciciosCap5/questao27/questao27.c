#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}

int main() {
    int escolha;
    float temperatura, resultado;

    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("\nEscolha uma opção (1-4): ");
    if (scanf("%d", &escolha) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    printf("Digite a temperatura: ");
    if (scanf("%f", &temperatura) != 1) {
        printf("Entrada inválida.\n");
        return 1;
    }
    switch (escolha) {
        case 1:
            resultado = celsiusParaFahrenheit(temperatura);
            printf("Resultado: %.2f °F\n", resultado);
            break;
        case 2:
            resultado = celsiusParaKelvin(temperatura);
            printf("Resultado: %.2f K\n", resultado);
            break;
        case 3:
            resultado = fahrenheitParaCelsius(temperatura);
            printf("Resultado: %.2f °C\n", resultado);
            break;
        case 4:
            resultado = kelvinParaCelsius(temperatura);
            printf("Resultado: %.2f °C\n", resultado);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}