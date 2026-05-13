#include "TLList.h"
#include<stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
};

TNo* TNo_createNFill(int info){
    return NULL;
}

TLList* TLList_create(){
    TLList* nova = malloc(sizeof(TLList));
    if(nova != NULL){
        nova->inicio = NULL;
    }
    return nova;
}

bool TLList_insert(TLList* lista, int info) {
    TNo* novo = malloc(sizeof(TNo));
    if (novo == NULL){
        return false; 
    }
    novo->info = info;
    novo->prox = NULL;

    if (lista->inicio == NULL || info < lista->inicio->info) {
        novo->prox = lista->inicio;
        lista->inicio = novo;
        return true;
    }

    TNo* aux = lista->inicio;
    
    while (aux->prox != NULL && aux->prox->info < info) {
        aux = aux->prox;
    }

    novo->prox = aux->prox;
    aux->prox = novo;

    return true;
}

void TLList_print(TLList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("%d->", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}