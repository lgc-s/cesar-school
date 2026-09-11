#include <stdio.h>
#include <ctype.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Decimal: %d | Hexadecimal: 0x%x | Octal: %o | ASCII: ", numero, numero, numero);
    if (isprint(numero)) {
        printf("%c\n", numero);
    } else {
        printf("[Nao imprimivel]\n");
    }

    return 0;
}