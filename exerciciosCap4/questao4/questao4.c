/*
a) A saída exata é:

"Prata
 Ouro"

Como código vale, o case 2 é aceito e a impressão "Prata"
acontece, porém, como não há um break no final desse case 
para cortar e encerrar a execução, acontece que o fluxo 
continua até o case 3 e imprime também "Ouro", parando
apenas no break do case 3.

b) Break serve para "quebrar" e interromper a execução do
bloco switch após um critério ser atendido, impedindo execuções
posteriores. "fall-through" é o nome do fenômeno que acontece
quando o break é omitido, gerando uma cascata de execuções de
cases que não foram atendidos e que não deveriam aparecer, como
visto na letra a).

c) Switch aceita apenas valores integrais, como int, char, short,
long, enum, etc. o que faz com que o float e double não possam ser
usados, já que switch trabalha e administra situações baseados em
valores absolutos e exatos, os dois tipos de dados incompatíveis
possuem imprecisão na representação da memória, gerando um erro
de compilação.
*/

#include <stdio.h>

int main() {
    int codigo = 2;
    
    switch (codigo) {
        case 1:
            printf("Bronze\n");
        case 2:
            printf("Prata\n");
        case 3:
            printf("Ouro\n");
            break;
        default:
            printf("Sem Medalha\n");
    }

    return 0;
}