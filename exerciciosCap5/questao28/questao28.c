#include <stdio.h>

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }

    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

int main() {
    float preco, pago, subtotal, total, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preço unitário do produto: ");
    if (scanf("%f", &preco) != 1 || preco < 0) {
        printf("Preço inválido.\n");
        return 1;
    }
    printf("Digite a quantidade: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);

    printf("\nFormas de pagamento:\n");
    printf("1. Á vista (10%% de desconto)\n");
    printf("2. Á prazo (Sem desconto)\n");
    printf("\nEscolha a opção de pagamento (1 ou 2): ");
    if (scanf("%d", &opcaoPagamento) != 1 || (opcaoPagamento != 1 && opcaoPagamento != 2)) {
        printf("Opção de pagamento inválida.\n");
        return 1;
    }

    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Digite o valor fornecido pelo cliente: ");
    if (scanf("%f", &pago) != 1 || pago < total) {
        printf("Valor pago insuficiente ou inválido.\n");
        return 1;
    }

    troco = calculaTroco(total, pago);

    printf("\nSubtotal:       R$ %.2f\n", subtotal);
    printf("Total a pagar:  R$ %.2f\n", total);
    printf("Troco:          R$ %.2f\n", troco);

    return 0;
}