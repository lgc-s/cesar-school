#include <stdio.h>
#include <math.h>

int main() {
    int idade, servico;

    printf("\nDigite a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço do trabalhador: ");
    scanf("%d", &servico);
    if (idade >= 65 || servico >= 30 || (idade >= 60 & servico >= 25)) {
        printf("\nO Trabalhador pode se aposentar.\n");
    } else {
        printf("\nO Trabalhador não pode se aposentar.\n");
    }

    return 0;
}