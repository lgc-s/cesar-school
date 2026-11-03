#include <stdio.h>

int main() {
    int total, entregue, troco;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);
    if (entregue < total) {
        printf("\nErro! O valor entregue pelo cliente é insuficiente.\n");
    } else {
        troco = entregue - total;
        printf("\nTroco total a ser dado: R$ %d\n", troco);
        if (troco == 0) {
            printf("Nenhum troco necessário.\n");
            return 0;
        }
        int c100 = troco / 100;
        troco %= 100;
        int c50 = troco / 50;
        troco %= 50;
        int c20 = troco / 20;
        troco %= 20;
        int c10 = troco / 10;
        troco %= 10;
        int c5 = troco / 5;
        troco %= 5;
        int c2 = troco / 2;
        troco %= 2;
        printf("Menor quantidade de cédulas:\n");
        if (c100 > 0) printf("- R$ 100,00: %d\n", c100);
        if (c50 > 0)  printf("- R$ 50,00: %d\n", c50);
        if (c20 > 0)  printf("- R$ 20,00: %d\n", c20);
        if (c10 > 0)  printf("- R$ 10,00: %d\n", c10);
        if (c5 > 0)   printf("- R$ 5,00: %d\n", c5);
        if (c2 > 0)   printf("- R$ 2,00: %d\n", c2);
        if (troco > 0) {
            printf("- Resto (não divisível por cédulas): R$ %d\n", troco);
        }
    }

    return 0;
}