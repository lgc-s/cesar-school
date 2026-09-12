#include <stdio.h>

int main() {
    float hrsNormais, hrsExtras;
    float salario, imposto;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &hrsNormais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &hrsExtras);
    salario = (hrsNormais * 10.00) + (hrsExtras * 15.00);
    imposto = (salario > 12000.00) ? ((salario - 12000.00) * 0.10) : 0.00;
    printf("Salario Anual Bruto: R$ %.2f\n", salario);
    printf("Imposto de Renda Retido: R$ %.2f\n", imposto);

    return 0;
}