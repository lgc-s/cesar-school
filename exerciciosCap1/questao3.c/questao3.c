/* Esse programa mostra o uso de comentários de diversas maneiras
* seja único, seja vários
*
* Exemplo de Documentação e Uso Geral
*********************************************************/
/* questao3.c */

#include <stdio.h>  /* Para o prinf() funcionar */
#include <stdlib.h> /* Para poder fazer o system("PAUSE") */

int main() { /*  Declaração da função main() e abertura conteúdo interno do main() */

    // Comentário de linha única usando duas "/"
    printf("Comentário funciona usando /**/, // ou /* que está em linhas diferentes\n");
    /* Chave "/*" dentro de outra chave não funciona Exemplo:*/
    printf("Exemplo de quando não funciona: /*/*/*/*");
    /* Texto largo
       Em Duas Linhas */
    system("PAUSE"); /* Chamada a funcao system para pausar a execucao */

    return 0;
} /* Fim do main() */