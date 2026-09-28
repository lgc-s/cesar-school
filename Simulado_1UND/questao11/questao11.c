#include <stdio.h>

int main() {
    int dias;
    float salarioLiquido, salarioBruto, imposto, gratificacao;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);
    salarioBruto = dias * 45;
    imposto = salarioBruto * 0.08;
    gratificacao = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - imposto + gratificacao;
    printf("\nDias Trabalhados: %d\nSalário Bruto: R$%.2f\nImposto de Renda: R$%.2f\nGratificação: R$%.2f\nSalário Líquido: R$%.2f\n", dias, salarioBruto, imposto, gratificacao, salarioLiquido);

    return 0;
}