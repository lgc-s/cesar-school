#include <stdio.h>
#include <math.h>

int main() {
    float distancia, litros, consumo;

    printf("\nDigite a distância percorrida pelo veículo: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros de gasolina consumidos pelo veículo: ");
    scanf("%f", &litros);
    consumo = distancia / litros;
    printf("\nConsumo: %.2fkm/l", consumo);
    if (consumo < 8) {
        printf("\nVenda o carro!\n");
    } else if (consumo > 14) {
        printf("\nSuper econômico!\n");
    } else {
        printf("\nEconômico!\n");
    }

    return 0;
}