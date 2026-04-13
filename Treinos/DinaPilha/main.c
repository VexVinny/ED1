#include "Stack.h"
#include <stdio.h>

void menu(){
    printf("\n=== Menu ===\n");
    printf("1. Inserir valor na pilha\n");
    printf("2. Remover valor da pilha\n");
    printf("3. Acessar valor do topo da pilha\n");
    printf("4. Imprimir a pilha\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

int main(){
    int op, qdt, info;
    Stack* pilha1 = Stack_create();

    do{
        menu();
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Digite o valor inteiro para inserir na pilha: ");
                scanf("%d", &info);
                if(Stack_push(pilha1, info))
                    printf("Valor inserido com sucesso!\n");
                else
                    printf("Falha ao inserir valor! Pilha cheia.\n");
                break;
            case 2:
                if(Stack_pop(pilha1, &info))
                    printf("Valor removido da pilha: %d\n", info);
                else
                    printf("Falha ao remover valor! Pilha vazia.\n");
                break;
            case 3:
                if(Stack_head(pilha1, &info))
                    printf("Valor do topo da pilha: %d\n", info);
                else
                    printf("Falha ao acessar valor! Pilha vazia.\n");
                break;
            case 4:
                Stack_destroy(pilha1);
                pilha1 = Stack_create();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                Stack_destroy(pilha1);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }while(op != 0);


    return 0;
}