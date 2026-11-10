#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);

    printf("Fração simplificada: %d/%d\n", num / divisor, den / divisor);
}

int main() {
    int a, b;
    
    printf("Digite dois inteiros positivos (numerador e denominador): ");
    if (scanf("%d %d", &a, &b) == 2 && a > 0 && b > 0) {
        printf("MDC de %d e %d = %d\n", a, b, mdc(a, b));
        simplifica(a, b);
    } else {
        printf("Entrada inválida. Digite apenas números inteiros positivos.\n");
    }
    
    return 0;
}