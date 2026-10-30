#include <stdio.h>
#include <math.h>

int main() {
    double num;
    
    printf("Digite um número: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("%.2f\n", sqrt(num));
    } else {
        printf("%.2f\n", num * num);
    }

    return 0;
}