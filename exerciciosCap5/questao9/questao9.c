#include <stdio.h>

int maior(int a, int b);

int main() {
    int num1, num2;

    printf("Digite dois números inteiros (n1 n2): ");
    scanf("%d %d", &num1, &num2);
    printf("O maior número é: %d\n", maior(num1, num2));

    return 0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}