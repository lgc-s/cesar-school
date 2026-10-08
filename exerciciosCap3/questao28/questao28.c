#include <stdio.h>

int main() {
    int opcao;
    float salario, reajuste, novoSalario, imposto, salarioLiquido;

    do {
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("\nDigite o salário: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.00) {
                    novoSalario = salario * 1.15;
                } else {
                    novoSalario = salario * 1.10;
                }
                reajuste = novoSalario - salario;
                printf("Reajuste: R$ %.2f\n", reajuste);
                printf("Novo salário: R$ %.2f\n\n", novoSalario);
                break;
            case 2:
                printf("\nDigite o salário: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.00) {
                    imposto = salario * 0.08;
                } else {
                    imposto = salario * 0.15;
                }
                salarioLiquido = salario - imposto;
                printf("Desconto de Imposto de Renda: R$ %.2f\n", imposto);
                printf("Salário após o desconto: R$ %.2f\n\n", salarioLiquido);
                break;
            case 3:
                printf("\nPrograma encerrado.\n");
                break;
            default:
                printf("\nOpcao inválida: Escolha uma opcao de 1 a 3!\n");
        }
    } while (opcao != 3);

    return 0;
}