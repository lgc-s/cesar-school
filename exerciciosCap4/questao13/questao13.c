#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    printf("+ - Soma\n");
    printf("- - Subtração\n");
    printf("* - Multiplicação\n");
    printf("/ - Divisão\n");
    printf("^ - Potenciação\n");
    printf("\nEscolha uma operação (digite o símbolo): ");
    scanf("%c", &operacao);
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("\nErro! divisão por zero não é permitida.\n");
                return 1;
            }
            resultado = num1 / num2;
            break;
        case '^':
            resultado = pow(num1, num2);
            break;
        default:
            printf("\nOperação inválida!\n");
            return 1;
    }
    printf("\nResultado: %.2lf\n", resultado);

    return 0;
}