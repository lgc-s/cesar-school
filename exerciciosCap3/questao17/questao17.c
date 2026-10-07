#include <stdio.h>

int main() {
    float nota, maior, menor, soma = 0.0, media;
    int total = 0;

    printf("Digite as notas dos alunos (0.0 a 10.0) (Encerre com -1.0).\n\n");
    while (1) {
        printf("Digite a nota: ");
        scanf("%f", &nota);
        if (nota == -1.0) {
            break;
        }
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota inválida! Digite um valor entre 0.0 e 10.0.\n");
            continue;
        }
        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }
        soma += nota;
        total++;
    }
    if (total > 0) {
        media = soma / total;
        printf("\nTotal de alunos avaliados: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Média geral: %.2f\n", media);
    } else {
        printf("\nNenhum aluno foi avaliado.\n");
    }
    return 0;
}