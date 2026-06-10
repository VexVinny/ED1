#include "TDList.h"
#include<stdio.h>
#include <stdlib.h>

typedef struct _no{
    int info;
    struct _no *prox;
}TNo;

struct _list{
    TNo* inicio;
    char policy;
};

TNo* TNo_createNFill(int info){
    return NULL;
}

bool TDList_insert_begin(TDList* lista, int info);
bool TDList_insert_end(TDList* lista, int info);

TDList* TDList_create(char policy){
    TDList* nova = malloc(sizeof(TDList));
    if(nova != NULL){
        nova->inicio = NULL;
        nova->policy = policy;
    }
    return nova;
}
bool TDList_insert(TDList* lista, int info){
    switch(lista->policy){
        case NO_INICIO: return TDList_insert_begin(lista, info);
        case NO_FIM: return TDList_insert_end(lista, info);
    }
    return false;
}

bool TDList_insert_begin(TDList* lista, int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false; 
    novo->info = info;
    novo->prox = lista->inicio;	
    lista->inicio = novo;
    return true;
}
bool TDList_insert_end(TDList* lista, int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo == NULL) 
        return false; 
    novo->info = info;
    novo->prox = NULL;
    if(lista->inicio == NULL)
        lista->inicio = novo;
    else{
        TNo* aux = lista->inicio;
        while(aux->prox != NULL)
            aux = aux->prox;
        aux->prox = novo;
    }
    return true;
}

void TDList_print(TDList* lista){
    TNo* aux = lista->inicio;
    while(aux!=NULL){
        printf("%d->", aux->info);
        aux = aux->prox;
    }
    putchar('\n');
}