#include <stdio.h>
#include <math.h>

int main() {
    char conceito;
    float nota;
    int faltas;

    printf("\nDigite a nota final: ");
    scanf("%f", &nota);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);
    if (nota < 4 && nota >= 0) {
        conceito = 'E';
    } else if (nota < 5 && nota >= 0) {
        conceito = (faltas > 20) ? 'E' : 'D';
    } else if (nota < 7.5 && nota >= 0) {
        conceito = (faltas > 20) ? 'D' : 'C';
    } else if (nota < 9 && nota >= 0) {
        conceito = (faltas > 20) ? 'C' : 'B';
    } else if (nota <= 10 && nota >= 0) {
        conceito = (faltas > 20) ? 'B' : 'A';
    } else {
        printf("\nErro! algum valor foi digitado incorretamente\n");
        return 1;
    }
    printf("\nO estudante possui Conceito %c\n", conceito);

    return 0;
}