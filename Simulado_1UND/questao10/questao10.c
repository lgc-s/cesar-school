#include <stdio.h>

int main() {
    int segundosTotais, segundos, minutos, horas;

    printf("Digite um número de segundos: ");
    scanf("%d", &segundosTotais);
    horas = segundosTotais/3600;
    minutos = (segundosTotais % 3600) / 60;
    segundos = segundosTotais%60;
    printf("%d segundos correspondem a %d hora, %d minuto, e %d segundos", segundos, horas, minutos, segundos);

    return 0;
}