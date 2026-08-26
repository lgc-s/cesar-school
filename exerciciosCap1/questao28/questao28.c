#include <stdio.h>

int main() {
    int v1, v2, v3;
    double media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &v2);
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &v3);

    media = (double)(v1 + v2 + v3) / 3.0;

    printf("A media aritmetica simples e: %.2f\n", media);

    return 0;
}
