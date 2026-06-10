#include <stdio.h>>
#include "BigInt.h"

typedef struct no{
    int info;
    struct no* prox;
    struct no* ant;
}TNo;

struct _list{
    TNo* inicio;
    TNo* fim;
};

BI_List* create_list(){
    BI_List* nova = malloc(sizeof(BI_List));
    if(nova != NULL){
        nova->inicio = NULL;
    }
    return nova;
}


TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo != NULL)
    {
        novo->prox = NULL;
        novo->info = info;
        novo->ant = NULL;
    }
    return novo;
}


bool TDList_insert_end(BI_List* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL){
        return false;
    }
    if(lista->fim == NULL){
        lista->inicio = novo;
        lista->fim = novo;
    }else{
        lista->fim->prox = novo;
        novo->ant = lista->fim;
    }
    lista->fim = novo;
    return true;
}

void List_print(BI_List* lista){
    for(TNo* aux = lista->inicio; aux; aux = aux->prox)
        printf("%d-> ", aux->info);
    putchar('\n');
}

