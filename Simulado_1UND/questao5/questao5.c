/*
a) while só executa após verificar a condição, já o do-while executa uma vez o conteúdo e efetua sua primeira
análise da condição depois dessa execução, independente de já estar falso, então while pode ser executado nenhuma
vez, mas o do-while sempre é executado pelo menos uma vez.

b) for é mais útil para poder controlar quantas vezes algo será executado contanto que exista uma variável de 
controle, que é iniciada, testada e incrementada de forma mais simples e rápida, todos estes 3 elementos podem
ser feitos em uma linha só. While é apenas melhor quando é imprevisível o controle e a previsibilidade da
condição, como um dado inserido de um usuário.

c) O erro nunca é de compilação, mas é lógica, já que o ponto e vírgula faz com que nenhuma ação aconteça,
caso seja falso, o código prossegue normalmente, mas se for verdadeiro, ele aguarda e repete o laço de forma
indefinida, sem executar nenhuma instrução ou código em si, deixando o código preso em um laço infinito 
(softlock).
*/