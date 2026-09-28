#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite um número entre 0 a 10: ");
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0) {
            printf("Número Inválido Digitado!\n");
        }
    } while (nota < 0.0 || nota > 10.0);
    printf("Nota válida digitada: %.1f\n", nota);

    return 0;
}