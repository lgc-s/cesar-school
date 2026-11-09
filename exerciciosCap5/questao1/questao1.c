/*
a) No código mostrado, a linha protótipo é o "float celsius(float);", no qual ela informa de forma antecipada ao compilador o seu tipo de
retorno, o nome e o parâmetro aceito antes de seu uso. Já a chamada acontece em "c = celsius(f)", já dentro da main() e este sendo o momento que
a execução se direciona para a execução da função e passando o valor f (100) para dentro dela. A definição da função acontece no "float celsius(float fahr)", 
em que o corpo da função é representado e internamente efetua o cálculo necessário, retornando o resultado obtido.

b) O protótipo serve para o compilador reconhecer e definir a assinatura (o tipo de dado que ela retorna e aceita) antes mesmo de encontrar a chamada
internamente no código em si, viabilizando a checagem e alocação correta dos dados e a alocação. Em caso de omissão ou a definição da função acontecesse 
dentro do main, o compilador automaticamente iria assumir que qualquer função por padrão como um retorno de um inteiro e aceitando argumentos adicionais
de forma implícita, gerando erros de compilação e warnings graves devido a imcompatibilidade e incapacidade de verificar os parâmetros float passados.
Os efeitos variam dependendo do compilador, em alguns casos rodando mesmo que seja uma violação e má prática de modularização.
*/

#include <stdio.h>

float celsius(float);

int main() {
    float c, f = 100.0;
    c = celsius(f);
    printf("Celsius = %.2f\n", c);
    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}