/*
a) No uso de um break; dentro de um for ou while (e do-while), ele
interrompe imediatamente e totalmente o laço, seguindo o código
dentro da normalidade, executando o que existir após o laço.

b) No uso de um continue dentro de um for ou while (e do-while),
a iteração é interrompida imediatamente e ao invés de seguir a
iteração ou encerrar o laço como um todo, ele encerra a iteração
atual e segue para a iteração seguinte do laço de repetição. após
o for, a terceira expressão do cabeçalho é executada, essa que é
referente a expressão de incremento e decremento, é depois que a
verificação do while (segunda expressão do cabeçalho) acontece.

c) Em laços que são aninhados apenas o laço for interno que é
cancelado em virtude do escopo que o break se encontra. o que faz
como que o laço externo continue normalmente e o interno sempre seja
interrompido a cada nova iteração do externo em virtude do break
interno dependendo de dados contextos.
*/