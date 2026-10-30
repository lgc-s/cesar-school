/*
a) A saída exata é:

"Idoso
 Adulto
 Jovem"

As várias respostas acontecem porque vários if independentes foram
foram utilizados em sequência, com todos os critérios sendo atingidos
e executados seus blocos internos e textos previstos, apenas o else 
no final que não é executado pelo fato do if (idade => 12) ter sua
condição atingida.

b) No if independentes, todas estas condições são testadas de forma
separada, permitindo que os vários blocos sejam executados mesmo
quando mais de uma condição é verdadeira. No else-if, as condições
são testadas em cascata única, executando o bloco apenas da primeira
incidência em que a condição é verdadeira e ignorando o restante da
cadeia, garantindo que apenas um caminha seja efetuado.

c) A estrutura escrita como else-if fica descrito como no código abaixo:
*/

#include <stdio.h>

int main() {
    int idade = 25;

    if (idade >= 60) {
    printf("Idoso\n");
    } else if (idade >= 18) {
    printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }

    /*
    //idade = 25
    int idade = 65;
    if (idade >= 60)
        printf("Idoso\n");
    if (idade >= 18)
        printf("Adulto\n");
    if (idade >= 12)
        printf("Jovem\n");
    else
        printf("Criança\n");
    */
    
    return 0;
}