#include <stdio.h>

int main() {
    int senha = 1409282026;
    int tentativa;
    int contador = 0;

    while (contador < 3) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        if (tentativa == senha) {
            printf("Acesso Concedido!\n");
            return 0;
        } else {
            contador++;
            printf("Senha incorreta!\n");
        }
    }
    printf("Conta Bloqueada por Segurança!\n");

    return 0;
}