/*
a) while sempre efetua a sua verificação ANTES de fazer qualquer execução,
o que pode levar a ele sequer ser executado em caso de verificação resultado
em false, então while sempre será executa no mínimo 0 VEZES, já do-while
sempre executa no mínimo UMA VEZ, já que a verificação é sempre realizada
DEPOIS da execução do código.

b) for é melhor para situações nas quais automatizações incrementais são
usadas, podendo definir um valor inicial, o valor acrescido a cada ciclo e a
condição de while para cálculos padronizados e previsíveis. While é melhor para
operar verificações básicas em variaveis externas que podem ser falsas na hora
da verificação. Já do-while é melhor para efetuar protocolos de verificação e
confirmação, como o preenchimento de uma senha, um dado para ser digitado ou a
validação e o tratamento de dados antes de uma verificação.

c) A expressão apresentada é configurada como um erro lógico, já que a condicional
existe, porém seu corpo vazio é interpretado apenas pelo ";", caso o while seja
falso, o corpo não é usado, em caso de ser verdadeiro, o corpo é usado, mas como
há nada, na prática, o código repete a execução no aguardo da condição atingir seu
requisito primário, mas pelo fato de já não haver conteúdo como explicado 
anteriormente, o loop do while vai continuar de forma indefinida e infinita.
*/