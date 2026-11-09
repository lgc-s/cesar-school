#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main() {
    int opcao;
    float num1, num2;

    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("0 - Sair\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &opcao);
    if (opcao == 0) {
        printf("Saindo do programa...\n");
        return 0;
    }
    if (opcao < 1 || opcao > 4) {
        printf("Opção inválida!\n");
        return 0;
    }
    printf("Digite dois números (n1 n2): ");
    scanf("%f %f", &num1, &num2);
    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(num1, num2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(num1, num2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(num1, num2));
            break;
        case 4:
            if (num2 == 0) {
                printf("Erro! divisão por zero nao permitida.\n");
            } else {
                printf("Resultado: %.2f\n", divide(num1, num2));
            }
            break;
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}