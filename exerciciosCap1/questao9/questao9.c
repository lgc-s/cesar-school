#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c", "\"");

    system("PAUSE");

    return 0;
}

/*
O interpretador consegue ler os argumentos colocados em virtude das aspas únicas (''), 
que entram no padrão ASCII 10, 9 e 34 espectivamente, o %c serve para fazer essa conversão
como símbolo ao invés de impressão. No segundo printf(), tudo o que foi descrito não se aplica 
devido ao fato de não usar aspas únicas, o que acaba gerando warning.

A Saída gerada é: 
{
        "Primeiro programaPressione qualquer tecla para continuar . . .}
*/ 
