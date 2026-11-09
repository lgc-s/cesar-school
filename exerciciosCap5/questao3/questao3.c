/*
a) - exibe_mensagem tem o parâmetro de entrada sendo (char* msg) e não tem valor de retorno (void)
   
   - obter_codigo não tem parâmetros de entrada (void) e retorna um valor de retorno do tipo inteiro (int)

   - limpar_tela não tem parâmetros de entrada (void) e não tem valor de retorno (void)

b) Um função com retorno sempre devolve seu resultado pela função return e pode ser usada para atribuir valores, já um void executa algo sem devolver 
nenhum valor, não sendo possível atribuir valores. Um exemplo onde função com retorno é necessário é um "float gerar_pagamento(...)", que o valor resultando 
é necessário e é atribuído após sua execução. Já "exibir_tela()" é um exemplo para um procedimento na qual um void é necessário, já que é uma ação que não 
precisa retornar um valor necessário para prosseguir o código, sendo apenas um ação visual e de rotina.

c) Inválida, pois limpar_tela é do tipo void, o que quer dizer que ela não retornará nenhum valor prático. Portanto, não é possível atribuir um retorno
a uma variável pelo fato de nada em si ser retornado.
*/

void exibe_mensagem(char* msg);
int obter_codigo(void);
void limpar_tela(void);