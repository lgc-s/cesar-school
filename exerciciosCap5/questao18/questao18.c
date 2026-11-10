#include <stdio.h>

long potencia(int base, int expoente) {
    // Aqui é o caso base
    if (expoente == 0) {
        return 1;
    }

    // Aqui é o passo recursivo
    return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente;

    printf("Digite a base e o expoente (n1 n2): ");
    scanf("%d %d", &base, &expoente);
    if (expoente < 0) {
        printf("Erro! o expoente não pode ser negativo.\n");
    } else {
        printf("%d elevado a %d é igual a %ld\n", base, expoente, potencia(base, expoente));
    }

    return 0;
}