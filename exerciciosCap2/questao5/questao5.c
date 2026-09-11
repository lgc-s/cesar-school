#include <stdio.h>
#include <stdbool.h>

int main() {
    int i = 1, j = 2, k = 3, n = 2; 
    float x = 3.30, y= 4.40;

    bool qA = i < j + 3;
    bool qB = 2 * i - 7 <= j - 8;
    bool qC = -x + y >= 2.00 * y;
    bool qD = x == y;
    bool qE = !(n - j);
    bool qF = !n - j;
    bool qG = i && j && k;
    bool qH = i || j - 3 && k;
    bool qI = i < j && 2 >= k;
    bool qJ = i == 2 || j == 4 || k == 5;
    // Verdadeiro é 1, Falso é 0
    printf("a) %d\nb) %d\nc) %d\nd) %d\ne) %d\nf) %d\ng) %d\nh) %d\ni) %d\nj) %d\n", qA, qB, qC, qD, qE, qF, qG, qH, qI, qJ);

    return 0;
}