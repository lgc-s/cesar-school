#include <stdio.h>

int main() {
    int mes, ano, dias = 0;
    char *nome_mes = "";

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano corrente: ");
    scanf("%d", &ano);
    switch (mes) {
        case 1:  nome_mes = "Janeiro"; dias = 31; break;
        case 2:  
            nome_mes = "Fevereiro";
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        case 3:  nome_mes = "Março"; dias = 31; break;
        case 4:  nome_mes = "Abril"; dias = 30; break;
        case 5:  nome_mes = "Maio"; dias = 31; break;
        case 6:  nome_mes = "Junho"; dias = 30; break;
        case 7:  nome_mes = "Julho"; dias = 31; break;
        case 8:  nome_mes = "Agosto"; dias = 31; break;
        case 9:  nome_mes = "Setembro"; dias = 30; break;
        case 10: nome_mes = "Outubro"; dias = 31; break;
        case 11: nome_mes = "Novembro"; dias = 30; break;
        case 12: nome_mes = "Dezembro"; dias = 31; break;
        default:
            printf("\nErro: Mês inválido! Por favor, insira um valor entre 1 e 12.\n");
            return 1;
    }
    printf("Mês: %s\n", nome_mes);
    printf("Ano: %d\n", ano);
    printf("Total de dias: %d dias\n", dias);

    return 0;
}