#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    while (a == 0) {
        printf("O valor de a não pode ser zero!\n");
        printf("Digite outro valor para a: ");
        scanf("%lf", &a);
    }
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    delta = (b * b) - (4 * a * c);
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equação possui uma raíz única.\n");
        printf("Raíz: x = %.2f\n", x1);
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais distintas.\n");
        printf("Raiz x1 = %.2f\n", x1);
        printf("Raiz x2 = %.2f\n", x2);
    }

    return 0;
}