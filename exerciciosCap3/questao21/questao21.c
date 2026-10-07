#include <stdio.h>
#include <stdlib.h>

int main() {
    char secreta, tentativa;
    int tentativas = 0;

    secreta = rand() % 26 + 'a';
    do {
        printf("Advinhe a letra minúscula secreta: ");
        scanf(" %c", &tentativa);
        tentativas++;
        if (tentativa < secreta) {
            printf("A letra secreta vem depois de '%c'.\n", tentativa);
        } 
        else if (tentativa > secreta) {
            printf("A letra secreta vem antes de '%c'.\n", tentativa);
        } 
        else {
            printf("\nParabéns! Você acertou!\n");
            printf("Total de tentativas: %d\n", tentativas);
        }
    } while (tentativa != secreta);

    return 0;
}