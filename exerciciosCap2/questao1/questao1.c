/*
a) O valor numérico que é impresso no console após é "2". 

b) Esse é o valor impresso pois "valor_inteiro" foi declarado como um "int". que permite apenas valores inteiros,
sem incluir casa decimais, como "valor inteiro" foi colocado com um valor decimal (2.97), as casas decimais foram
ignoradas indepentende de estar quase em outro inteiro, desde que o "int" reage apenas a unidade pois a memory é
apenas alocada a ela. O nome do acontecimento é Truncamento de Tipo.

c) Para manter o valor inicial, o "int" deve ser trocado para "float" ou "double", com o limite de casas decimais
podendo ser definido usando "%.2f" no printf caso seja duas casa por exemplo. caso seja desejado um arredondamento
para um valor inteiro, é recomendado utilizar a biblioteca "<math.h>", "round()" leva para o valor mais perto,
"ceil()" é para caso o arredondamento seja para cima e "floor()" para arredondar para baixo.
*/