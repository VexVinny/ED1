#include "Ed.h"

typedef struct no{
    int info;
    struct no* prox;
}TNo;

struct _list{
    TNo* inicio;
};

TNo* TNo_createNFill(int info){
    TNo* novo = malloc(sizeof(TNo));
    if(novo != NULL)
    {
        novo->prox = NULL;
        novo->info = info;
    }
    return novo;
}

EDList* creat_list(){
    EDList* nova = malloc(sizeof(EDList));
    if(nova != NULL){
        nova->inicio = NULL;
    }
    return nova;
}

bool ED_insert(EDList* lista, int info){
    TNo* novo = TNo_createNFill(info);
    if(novo == NULL){
        return false;
    }
    if(lista->inicio == NULL){
        lista->inicio = novo;
    }else{
        TNo* aux = lista->inicio;

        while(aux->prox != lista->inicio){
            aux = aux->prox;
        }
        aux->prox = novo;
    }
    novo = lista->inicio;
}

void EDList_print(EDList* lista){
    TNo* aux = lista->inicio;
    if(aux != NULL){
        
        do{
        printf("%d -> ", aux->info);
        aux = aux->prox;
        }while(aux != lista->inicio);

        putchar('\n');
    }
}

bool ED_sorteio(EDList* lista, int n, int m){
    int qtd = n;
    TNo* aux = lista->inicio;
    TNo* temp = (TNo*)malloc(sizeof(TNo));

    if(aux == NULL || temp == NULL){
        return false;
    }
    

    while(qtd != 1){
        for(int i = 0; i < m-1; i++){
            aux = aux->prox;
        }
        if(aux == lista->inicio){
            lista->inicio = aux->prox;
        }
        temp = aux->prox;
        aux = aux->prox->prox;
        free(temp);
        lista->inicio = aux->prox;
        qtd--;
    }

}