#include <stdio.h>

int main() {
    int senha = 1007282026;
    int tentativa;
    int tentativas;

    for (tentativas = 1; tentativas <= 3; tentativas++) {
        printf("Digite a senha numérica: ");
        scanf("%d", &tentativa);
        if (tentativa == senha) {
            printf("Acesso Concedido!\n");
            printf("Número de tentativas utilizadas: %d\n", tentativas);
            return 0;
        }
        printf("Senha incorreta!\n");
    }
    printf("Conta Bloqueada por Segurança!\n");

    return 0;
}