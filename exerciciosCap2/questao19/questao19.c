#include <stdio.h>

int main() {
    int dias;
    float bruto, imposto, liquido;
    const float taxa = 30.00f;
    const float aliquota = 0.08f;
    
    printf("Digite o número de dias efetivamente trabalhados: ");
    if (scanf("%d", &dias) != 1 || dias < 0) {
        printf("Erro: Entrada inválida!\n");
        return 1;
    }
    bruto = dias * taxa;
    imposto = bruto * aliquota;
    liquido = bruto - imposto;
    printf("Dias trabalhados: %d\n", dias);
    printf("Quantia bruta: R$ %.2f\n", bruto);
    printf("Valor líquido: R$ %.2f\n", liquido);

    return 0;
}