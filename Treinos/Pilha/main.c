#include "pilha.h"
#include<stdio.h>

void menu(){
    printf("1 - criar pilha\n2 - adicionar valor\n3 - remover valor\n4 - acesso ao elemento do topo\n5 - destruir pilha\n6 - verificar parenteses\n0 - sair\nEscolha:");
}

int main(){
    Pilha* p = cria_pilha();
    int valor, op;
    char str[100];

    do{
        menu();
        scanf("%d", &op);
        switch (op){
            case 1:
                cria_pilha();
                break;
            case 2:
                printf("Qual valor quer adicionar à pilha? ");
                scanf("%d", &valor);
                push(p, valor);
                break;
            case 3:
                pop(p, valor);
                break;
            case 4:
                ver_pilha(p);
                break;  
            case 5:
                destruir(p);
                break;
            case 6:
                printf("Digite a string com parenteses: ");
                scanf("%s", str);
                verificar_parenteses(str, p);
                break;
            case 0:
                printf("saindo...");
                break;
        default:
            printf("valor invalido!");
            break;
        }
    }while(op != 0);

    return 0;
}
