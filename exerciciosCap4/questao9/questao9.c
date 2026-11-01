#include <stdio.h>

int main() {
    float laboratorio, semestral, exame, media;

    printf("Digite a nota do Trabalho de Laboratório: ");
    scanf("%f", &laboratorio);
    printf("Digite a nota da Avaliação Semestral: ");
    scanf("%f", &semestral);
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &exame);
    media = (laboratorio * 2 + semestral * 3 + exame * 5) / 10;
    printf("\nMédia ponderada: %.2f\n", media);
    if (media < 3.0) {
        printf("Reprovado!\n");
    }
    else if (media < 5.0) {
        printf("Em Recuperação!\n");
    }
    else {
        printf("Aprovado!\n");
    }

    return 0;
}