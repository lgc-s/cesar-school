#include <stdio.h>

int main() {
    double celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9.00 / 5.00) + 32.00;
    kelvin = celsius + 273.15;
    printf("Temperatura em Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Temperatura em Kelvin:     %.2f K\n", kelvin);

    return 0;
}