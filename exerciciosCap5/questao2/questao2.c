/*
a) Um função C só pode retornar apenas um único valor pelo return. Na função "calcular()", parece que o usuário tentava retornar tanto a soma quanto a média
de três valores "return soma, media;", essa abordagem porém falha em cumprir o objetivo pois a vírgula avalia da esquerda para a direita e apenas o último
valor "media" é lido e retornado em questão, gerando comportamento inválido já que a função espera apenas um int como retorno.

b) O return sem valores em "imprime_mensagem()" interrompe a execução da função e retornar o controle para a função chamadora. No caso de um void, um return
não é obrigatório, pois um retorno automático (void) já existe de forma implícita ao final ser chegado (nada é retornado), só é necessário se haver um retorno 
caso seja antecipado, como no caso do "(erro < 0)".

c) Para retornar média e soma, funções separadas são necessárias:

"
int calcular_media(int a, int b, int c) { int soma = a + b + c; return soma / 3; }
int calcular_soma(int a, int b, int c) { return a + b + c; }
"

Já que não dá para fazer mais de um retorno, duas funções C distintas são necessárias. O return tem restrições e a função só pode ter um tipo de 
retorno e entregar apenas um valor por retorno.
*/

int calcular(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return soma, media;
}

void imprime_mensagem(int erro) {
    if (erro < 0) {
    printf("Erro invalido\n");
    return;
    }
    printf("Codigo processado: %d\n", erro);
}

// letra c)

int calcular_media(int a, int b, int c) { 
    int soma = a + b + c; 
    return soma / 3; 
}

int calcular_soma(int a, int b, int c) { 
    return a + b + c; 
}