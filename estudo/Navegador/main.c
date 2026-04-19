#include "navegador.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    PN* Nav = criar_navegador();
    int x, op;

    do{
        printf("- - - MENU - - -\n");
        printf("1 - Visitar pagina\n2 - Voltar Pagina\n3 - Pagina Atual\n0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &op);
        switch (op){
        case 1:
            printf("qual numero da pagina? ");
            scanf("%d", &x);
            visitarPagina(Nav, x);
            break;
        case 2:
            voltarPagina(Nav);
            break;
        case 3:
            paginaAtual(Nav);
            break;
        case 0:
            printf("Saindo.....\n\n");
            break;
        default:
            printf("numero invalid0!\n\n");
            break;
        }
    }while(op != 0);

}