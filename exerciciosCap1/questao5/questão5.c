// Está faltando as diretivas #include, como o #include <stdio.h> para o "printf()" e o #include <stdlib.h> para o "system()"

main() // No padrão do ANSI C (principalmente a partir do C99), é obrigatório declarar "int" como tipo de valor para o "main()"
{
    printf("Linguagem C");
    system("pause");

    // Está faltando o "return 0;" ao final do código, que é necessário para retornar e finalizar o "main()"
}