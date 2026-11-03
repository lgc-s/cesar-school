#include <stdio.h>

int main() {
    double salario, aumento, novoSalario, percentual;
    int cargo;

    printf("Digite o salário atual: R$ ");
    scanf("%lf", &salario);
    printf("\n1 - Técnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Digite o código do cargo: ");
    scanf("%d", &cargo);
    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                percentual = 0.15;
            } else {
                percentual = 0.10;
            }
            break;
        case 2:
            if (salario <= 5000) {
                percentual = 0.10;
            } else {
                percentual = 0.05;
            }
            break;
        case 3:
            percentual = 0.08;
            break;
        default:
            printf("\nCódigo de cargo inválido!\n");
            return 0;
    }
    aumento = salario * percentual;
    novoSalario = salario + aumento;
    printf("\nValor do aumento: R$ %.2lf\n", aumento);
    printf("Novo salário: R$ %.2lf\n", novoSalario);

    return 0;
}