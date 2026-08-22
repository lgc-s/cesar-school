// Está faltando as diretivas #include, como o #include <stdio.h> para o "printf()" e o #include <stdlib.h> para o "system()"

main() // No padrão do ANSI C (principalmente a partir do C99), é obrigatório declarar "int" como tipo de valor para o "main()"
{
    /* o primeiro ";" está encerrando a linha, não fazendo b e c serem declarados, 
       um ":" está fechando a linha incorretamente, deveria ser ";"*/
    int a=1; b=2; c=3: 
    /* - Está faltando a aspa dupla de fechamento antes dos parametros
       - Variável d não foi declarada
       - Há apenas 3 especificadores "%d", quando existem 4 argumentos declarados
       - "0s" está escrito como "0" ao invés de "O"
       - Os especificadores estão colados, o que fará os números estarem grudados (ex: "123" ao invés de "1, 2, 3") */
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
}