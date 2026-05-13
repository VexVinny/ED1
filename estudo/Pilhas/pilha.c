#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


typedef struct _pilha{
    int qtd;
    int data[10];
}Pilha;

Pilha* criar_pilha(){
    Pilha* P = malloc(sizeof(Pilha));
    if(P != NULL){
        P->qtd = -1;
        return P;
    }
}

int push_pilha(Pilha* P, int info){
    if(P != NULL){
        P->qtd++;
        P->data[P->qtd] = info;
    }
}

int pop_pilha(Pilha* P){
    int temp;
    if(P != NULL){
        
    }
}

int ver_topo(Pilha*);

void destruir_pilha(Pilha*);

int ver_tamanho(Pilha*);

int pilha_cheia(Pilha*);

int pilha_vazia(Pilha*);
