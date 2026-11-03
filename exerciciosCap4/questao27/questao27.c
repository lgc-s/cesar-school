#include <stdio.h>

int main() {
    int horas;
    float valorTotal = 0.0;

    printf("Digite o número de horas inteiras de permanência: ");
    scanf("%d", &horas);
    if (horas <= 0) {
        printf("\nErro! O tempo de permanência deve ser um valor inteiro positivo (maior que zero).\n");
        return 1;
    }
    if (horas <= 2) {
        valorTotal = horas * 2.00;
    } 
    else if (horas <= 4) {
        valorTotal = (2 * 2.00) + ((horas - 2) * 2.50);
    } 
    else {
        valorTotal = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }
    printf("\nTempo total de permanência: %d hora(s)\n", horas);
    printf("Valor final cobrado: R$ %.2f\n", valorTotal);

    return 0;
}