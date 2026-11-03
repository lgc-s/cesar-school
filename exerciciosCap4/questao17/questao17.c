#include <stdio.h>

int main() {
    double valorCompra, valorFinal, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%lf", &valorCompra);
    printf("\n1 - A Vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("\nEscolha uma opção (1 ou 2): ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            valorFinal = valorCompra * 0.90;
            comissao = valorFinal * 0.05;
            printf("Valor com desconto: R$ %.2f\n", valorFinal);
            printf("Comissão do vendedor: R$ %.2f\n", comissao);
            break;
        case 2:
            parcela = valorCompra / 3;
            comissao = valorCompra * 0.05;
            printf("Valor de cada parcela: R$ %.2f\n", parcela);
            printf("Comissão do vendedor: R$ %.2f\n", comissao);
            break;
        default:
            printf("\nOpção inválida!\n");
            break;
    }

    return 0;
}