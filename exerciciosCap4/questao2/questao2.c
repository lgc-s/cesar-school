/*
a) "Opção B" é o que é impresso na execução do código. Apesar do if (x > 10)
ser verdadeiro e prosseguir, o if (y > 10) é falso, portanto não prossegue, 
assim o else é executado, imprimindo o resultado que fora descrito.

b) Em C, o else sempre se associa ao if mais próximo dele caso este não tenha
um else correspondente, essa regra chamada de dangling else, acontece independente
da indentação do código. No caso de previsibilidade, é recomendado o uso de chaves
"{}" para delimitar e impedir cenários de dangling else indesejados. Na questão em
si, o else é ligado diretamento ao "if (y > 10)", e não está ligado ao
if (x > 10)
*/

#include <stdio.h>

int main() {
    int x = 5, y = 15;

    /*
    if (x > 10)
        if (y > 10)
            printf("Opção A\n");
    else
        printf("Opção B\n");
    */

    // Letra c)
    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n");
    }

    return 0;
}