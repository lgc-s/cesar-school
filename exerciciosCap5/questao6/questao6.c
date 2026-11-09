/*
a) #include <stdio.h> inclui a biblioteca padrão de C, já "areas.h" tem um arquivo de cabeçalho criado pelo programador. usamos aspas ("") para bibliotecas
pessoais e chaves (<>) para bibliotecas padrão do C, portanto 

b) #undef SOMA remove a definição de macro #SOMA. a #undef SOMA(x,y) já é incorreta pois a diretiva #undef só aceita no nome da macro, recusando utilizar ela
com os parâmetros escritos.

c) Quando DEBUG não é definido, a mensagem "Modo normal" é a que se torna impressa, essa decisão por si acontece ainda no pré-processamento, antes da 
compilação e execução. As diretivas por si não aparecem na execução final pois elas são processadas e posteriormente removidas na dada situação.
*/

#include <stdio.h>
/* #include "areas.h" (Comentado para evitar sinalização de erro)*/

#define SOMA(x,y) ((x)+(y))
#undef SOMA

#ifdef DEBUG
    printf("Modo de depuracao\n");
#else
    /*printf("Modo normal\n"); (Comentado para evitar sinalização de erro)*/
#endif