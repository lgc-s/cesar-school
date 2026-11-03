
#include <stdio.h>

int main() {
    int ang1, ang2, ang3, soma;

    printf("Digite os três ângulos do triângulo (x y z): ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    soma = ang1 + ang2 + ang3;
    if (ang1 <= 0 || ang2 <= 0 || ang3 <= 0 || soma != 180) {
        printf("Triângulo inválido!\n");
    }
    else {
        if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
            printf("Triângulo Retângulo.\n");
        }
        else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
            printf("Triângulo Obtusângulo.\n");
        }
        else {
            printf("Triângulo Acutângulo.\n");
        }
    }

    return 0;
}
