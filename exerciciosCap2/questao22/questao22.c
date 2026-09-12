#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiúscula: ");
    scanf(" %c", &maiuscula);
    if (maiuscula >= 'A' && maiuscula <= 'Z') {
        minuscula = maiuscula + ('a' - 'A');
        printf("Caractere original: %c (ASCII: %d)\n", maiuscula, maiuscula);
        printf("Caractere minúsculo: %c (ASCII: %d)\n", minuscula, minuscula);
    } else {
        printf("Erro: Entrada Inválida!\n");
    }

    return 0;
}