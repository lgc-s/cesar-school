#include <stdio.h>

int main() {
    float n1, n2, n3, n4, mediaSimples, mediaPonderada;

    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &n3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &n4);
    mediaSimples = (n1 + n2 + n3 + n4) / 4.00f;
    mediaPonderada = (n1 * 1.00f + n2 * 1.00f + n3 * 2.00f + n4 * 2.00f) / 6.00f;
    printf("Média Aritmética Simples: %.2f\n", mediaSimples);
    printf("Média Ponderada: %.2f\n", mediaPonderada);

    return 0;
}