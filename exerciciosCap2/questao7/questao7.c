#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    if (scanf("%d/%d/%d", &dia, &mes, &ano) == 3) {
        printf("Data no formato invertido (aaaa/mm/dd): %04d/%02d/%02d\n", ano, mes, dia);
    } else {
        printf("Erro: Formato de entrada invalido. Certifique-se de usar dd/mm/aaaa.\n");
    }

    return 0;
}