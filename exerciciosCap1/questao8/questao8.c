#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n\t\"Primeiro programa\"");

    system("PAUSE");
    
    return 0;
}

/*
O Programa pula uma linha, e em seguida usa tab que deixa o texto adiantado, 
depois a execução pausa pedindo para digitar qualquer tecla para seguir e 
assim terminar a execução do código.

- O "\n" faz com que uma linha seja pulada a partir do próximo texto a ser impresso.
- O "\t" executa um tab, que pula cerca de 8 linhas.
- O "\"" permite uma aspa ser impressa no console.

A Saída gerada é: 
{
        "Primeiro programa"Pressione qualquer tecla para continuar . . .}
*/ 
