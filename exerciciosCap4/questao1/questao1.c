/*
a) Ao escrever "x = 0", você não está comparando, mas sim atribuindo um valor, 
portanto, uma declaração apenas é feita e apenas o i é comparado consigo, sem
levar em conta o valor anterior e utilizando o que era pra se a comparação como
um novo valor, por razões de compilação, quando o i está sozinho, se o valor for
zero, que equivale a falso, o código não se prossegue a ler o bloco interno dentro
do if, mas se o valor não for zero, o bloco é executado, já que 1 e true são sinôminos
para o compilador. A questão deixa ambíguo se o valor i já é declarado
anteriormente, pois se não tiver sido, o código não será executado em ambas
situações.

b) Como explicado anteriormente, o compilador é capaz de interpretar 0 como
false, com true sendo um valor diferente de 0 (Parte do ANSI C), caso um valor não haja um
comparativo (como ==) e haja um valor definido, o valor falso (0) fará o bloco
interno do if não ser executado e o bloco if será executado quando a condição 
ser true.

c) o ANSI C (ou C89/C90) na seção 3.6.4.1, define que o valor 0 é equivalente a falso, e que qualquer valor
diferente a 0, independente de ser positivo ou negativo, portanto, quando i tiver seu
valor atribuído como -5 no if, o bloco do if será executado por -5 ser considerado implicitamente como
verdadeiro pela compilação.
*/