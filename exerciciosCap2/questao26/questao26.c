#include <stdio.h>

int main() {
    float comprimento, largura, metro, perimetro, arame, total;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);
    printf("Digite o preco por metro do arame farpado (R$): ");
    scanf("%f", &metro);
    perimetro = 2 * (comprimento + largura);
    arame = perimetro * 3;
    total = arame * metro;
    printf("Quantidade total de arame necessaria: %.2f metros\n", arame);
    printf("Custo total do cercamento: R$ %.2f\n", total);

    return 0;
}