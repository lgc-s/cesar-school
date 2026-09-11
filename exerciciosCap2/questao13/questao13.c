#include <stdio.h>

void calcularQuadrado() {
    float lado, area;

    printf("Digite o valor do lado (L): ");
    if (scanf("%f", &lado) == 1 && lado > 0) {
        area = lado * lado;
        printf("Área do quadrado: %.2f\n", area);
    } else {
        printf("Erro: O valor do lado deve ser maior que zero.\n");
    }
}

void calcularRetangulo() {
    float base, altura, area;

    printf("Digite o valor da base (B): ");
    scanf("%f", &base);
    printf("Digite o valor da altura (H): ");
    scanf("%f", &altura);
    if (base > 0 && altura > 0) {
        area = base * altura;
        printf("Área do retângulo: %.2f\n", area);
    } else {
        printf("Erro: A base e a altura devem ser maiores que zero.\n");
    }
}

void calcularTrianguloRetangulo() {
    float base, altura, area;
    printf("Digite o valor da base (B): ");
    scanf("%f", &base);
    printf("Digite o valor da altura (H): ");
    scanf("%f", &altura);
    if (base > 0 && altura > 0) {
        area = (base * altura) / 2.00f;
        printf("Área do triângulo retângulo: %.2f\n", area);
    } else {
        printf("Erro: A base e a altura devem ser maiores que zero.\n");
    }
}

int main(void) {
    int opcao;

    printf("1. Área do Quadrado (Lado L)\n");
    printf("2. Área do Retângulo (Base B e Altura H)\n");
    printf("3. Área do Triângulo Retângulo (Base B e Altura H)\n");
    printf("Escolha uma opção (1-3): ");    
    if (scanf("%d", &opcao) != 1) {
        printf("\nOpção inválida! Digite apenas números inteiros.\n");
    }
    switch (opcao) {
        case 1:
            calcularQuadrado();
            break;
        case 2:
            calcularRetangulo();
            break;
        case 3:
            calcularTrianguloRetangulo();
            break;
        default:
            printf("Erro: Entrada invalida.\n");
        }

    return 0;
}