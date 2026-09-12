#include <stdio.h>

int main() {
    int hrInicio, minInicio, sgInicio, duracao, total, hrFim, minFim, sgFim;

    printf("Digite a hora de inicio (0-23): ");
    scanf("%d", &hrInicio);
    printf("Digite os minutos de inicio (0-59): ");
    scanf("%d", &minInicio);
    printf("Digite os segundos de inicio (0-59): ");
    scanf("%d", &sgInicio);
    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);
    total = (hrInicio * 3600) + (minInicio * 60) + sgInicio + duracao;
    hrFim = (total / 3600) % 24;
    minFim = (total % 3600) / 60;
    sgFim = total % 60;
    printf("\nHorario de termino do experimento: %02d:%02d:%02d\n", hrFim, minFim, sgFim);

    return 0;
}