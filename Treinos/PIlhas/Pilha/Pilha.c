#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int index;
} Pilha;

Pilha* cria_pilha(){
    Pilha* p;
    p = malloc(sizeof(Pilha));

    p->data = malloc(sizeof(int) * 5);
    p->index = -1;

    return p;
}

void push(Pilha* p, int valor){
    if(p->index == 4){
        printf("Pilha cheia\n");
    } else {
        p->index++;
        p->data[p->index] = valor;
    }
}

int pop(Pilha* p, int valor){
    if(p->index == -1){
        printf("Pilha vazia\n");
        return -1;
    } else {
        int valor = p->data[p->index];
        p->index--;
        return valor;
    }
}

void ver_pilha(Pilha* p){
    if(p->index == -1){
        printf("Pilha vazia\n");
    } else {
        printf("O valor do topo é: %d\n", p->data[p->index]);
    }
}

void destruir(Pilha* p){
    free(p->data);
    free(p);
}

void verificar_parenteses(char* str, Pilha* p){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '('){
            push(p, 1);
        } else if(str[i] == ')'){
            if(pop(p, 0) == -1){
                printf("Parenteses incorretos\n");
                return;
            }
        }
    }

    if(p->index == -1){
        printf("Parenteses corretos\n");
    } else {
        printf("Parenteses incorretos\n");
    }
}