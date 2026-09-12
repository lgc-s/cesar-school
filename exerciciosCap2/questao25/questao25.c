/*
A fórmula matemática básica, porém, complexa é "liquido = base + (base * 0,05) - (base * 0,07)". Para evitar redundância, a
fórmula pode ser simplificada para "liquido = base * (1+0,05-0,07)", onde 1 representa o valor total, o 0,05 representa os 5% 
acrescidos da gratificação, e o 0,07 representa os 7% decrescidos do imposto. Mesmo assim a fórmula pode ser ainda mais simplificada
ao somar o que está dentro dos parênteses, a fórmula final fica "liquido = base * 0,98", que é resultado das ditas somas
*/

#include <stdio.h>

int main() {
    float base, liquido;

    printf("Digite o salario-base do funcionario: R$ ");
    scanf("%f", &base);
    liquido = base * 0.98;
    printf("Salario Liquido: R$ %.2f\n", liquido);

    return 0;
}