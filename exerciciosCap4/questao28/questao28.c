#include <stdio.h>

int main() {
    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("\nDirecionando para Consulta de Saldo...\n");
            break;
        case 2:
            printf("\nDirecionando para Emissão de Extrato...\n");
            break;
        case 3:
            printf("\nDirecionando para Transferência...\n");
            break;
        case 4:
            printf("\nDirecionando para Falar com Atendente...\n");
            break;
        default:
            printf("\nErro! Opção inválida.\n");
            break;
    }

    return 0;
}