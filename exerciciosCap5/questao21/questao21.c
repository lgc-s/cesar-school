#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void) {
    int a, b;

    printf("Digite dois números inteiros (n1 n2): ");
    scanf("%d %d", &a, &b);
    printf("A² = %d\n", SQR(a));
    printf("B² = %d\n", SQR(b));
    printf("MAX: %d\n", MAX(a, b));
    printf("MIN: %d\n", MIN(a, b));

    return 0;
}