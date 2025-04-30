/*Enunciado: Sistema de Gerenciamento de Biblioteca
Você foi contratado para desenvolver um sistema simples para gerenciar uma biblioteca. O sistema deve permitir que os usuários realizem operações como:

Cadastrar um novo livro (título, autor e quantidade de exemplares disponíveis).

Buscar um livro pelo título e exibir suas informações.

Realizar um empréstimo (diminuindo a quantidade de exemplares disponíveis, se houver cópias disponíveis).

Devolver um livro (aumentando a quantidade de exemplares disponíveis).

Listar todos os livros cadastrados.

Sair do sistema.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int esc = 0, expl;
    char tit [30], aut[30], busc[30];
    do{
        printf("\n*************MENU*************\n");
        printf("** 1 - Cadastrar novo livro **\n");
        printf("** 2 - Buscar livro         **\n");
        printf("** 3 - Realizar empréstimo  **\n");
        printf("** 4 - Devolver livro       **\n");
        printf("** 5 - Listar livros        **\n");
        printf("** 6 - Sair                 **\n");
        printf("******************************\n");
        scanf("%d", &esc);
            //cadastro
            if(esc == 1)
                {
                printf("Digite o Titulo do Livro: \n\n");
                scanf("%s", &tit);
                printf("Digite o nome do autor: \n\n");
                scanf("%s", &aut);
                printf("Digite a quantidade de exemplares: \n\n");
                scanf("%d", &expl);
                printf("Livro cadastrado com sucesso!!\n");
                }
            if(esc ==  2)
                {
                 printf("Digite o titulo do livro:\n\n");
                 scanf("%s", &busc);
                }
            if(esc == 3)
                {
                printf("Digite o titulo do livro:\n\n");
                scanf("%s", &busc);
                //verificar quantidade de exemplares do mesmo pesquisado, caso maior que 0 diminuir 1, senao apresentar erro...
                }
            if(esc ==  4)
                {
                 printf("Digite o titulo do livro:\n\n");
                 scanf("%s", &busc);
                 // aumentar a quantidade de exemplares do mesmo pesquisados
                }
            if(esc ==  5)
                {
                 // listar livros cadastrados no BD.
                }

            }
    while(esc != 6);

    return 0;
}


//ainda não terminei
