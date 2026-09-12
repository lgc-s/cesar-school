#include <stdio.h>
#include <math.h>

int main() {
    float alturaDegrauCm;
    float alturaTotalM;
    float alturaTotalCm;
    int numero_degraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alturaDegrauCm);
    printf("Digite a altura total a ser alcancada (em metros): ");
    scanf("%f", &alturaTotalM);
    if (alturaDegrauCm <= 0 || alturaTotalM <= 0) {
        printf("Erro: Entrada Inválida!\n");
        return 1;
    }
    alturaTotalCm = alturaTotalM * 100.00f;
    numero_degraus = (int)ceil(alturaTotalCm / alturaDegrauCm);
    printf("Numero minimo de degraus a subir: %d\n", numero_degraus);

    return 0;
}