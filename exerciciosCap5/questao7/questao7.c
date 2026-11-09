#include <stdio.h>

int soma(int a, int b);

int main() {
    int num1, num2;

    printf("Digite dois números inteiros (n1 n2): ");
    scanf("%d %d", &num1, &num2);
    printf("A soma total é: %d\n", soma(num1, num2));

    return 0;
}

int soma(int a, int b) {
    return a + b;
}