#include <stdio.h>

int main() {
    int numero;
    long long int fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Erro: Não existe fatorial de número negativo!\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", numero, fatorial);
        printf("Número Fatorado: %lld\n", fatorial);
    }

    return 0;
}