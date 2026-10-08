#include <stdio.h>

int main() {
    int saque;
    int quantidade;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &saque);
    if (saque <= 0) {
        printf("Valor de saque inválido!\n");
        return 0;
    }
    printf("\nCédulas utilizadas:\n");
    quantidade = 0;
    while (saque >= 100) {
        saque -= 100;
        quantidade++;
    }
    printf("R$ 100: %d cédula(s)\n", quantidade);
    quantidade = 0;
    while (saque >= 50) {
        saque -= 50;
        quantidade++;
    }
    printf("R$ 50: %d cédula(s)\n", quantidade);
    quantidade = 0;
    while (saque >= 20) {
        saque -= 20;
        quantidade++;
    }
    printf("R$ 20: %d cédula(s)\n", quantidade);
    quantidade = 0;
    while (saque >= 10) {
        saque -= 10;
        quantidade++;
    }
    printf("R$ 10: %d cédula(s)\n", quantidade);
    quantidade = 0;
    while (saque >= 5) {
        saque -= 5;
        quantidade++;
    }
    printf("R$ 5: %d cédula(s)\n", quantidade);
    quantidade = 0;
    while (saque >= 2) {
        saque -= 2;
        quantidade++;
    }
    printf("R$ 2: %d cédula(s)\n", quantidade);
    if (saque > 0) {
        printf("\nNão foi possivel sacar R$ %d com as cédulas disponíveis.\n", saque);
    }

    return 0;
}