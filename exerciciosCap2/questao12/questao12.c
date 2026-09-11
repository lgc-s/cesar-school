#include <stdio.h>

int main() {
    int numero;
    int antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    // Atribuição Inicial que preserva a variável original "numero".
    antecessor = numero;
    sucessor = numero;
    // Aplicação unária de decrésimo e acrésimo respectivamente para resultar nos números exigidos.
    --antecessor;
    ++sucessor;
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}