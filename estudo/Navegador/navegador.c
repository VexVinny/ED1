#include "navegador.h"
#include <stdio.h>
#include <stdlib.h>

PN* criar_navegador(){
    PN* pilhaN = (PN*) malloc(sizeof(PN));

    if(pilhaN != NULL){
        pilhaN->topo = NULL;
        pilhaN->qtd = 0;
    }
    return pilhaN;
}

int visitarPagina(PN* pilhaN, int info){
    if(pilhaN == NULL) return 0;

    Tno* novo = malloc(sizeof(Tno));
    if(novo == NULL){
        return 0;
    } 

    novo->id_pagina = info;
    novo->prox = pilhaN->topo;
    pilhaN->topo = novo;
    pilhaN->qtd++;

    return 1;
}

int voltarPagina(PN* pilhaN){
    if(pilhaN == NULL || pilhaN->topo == NULL){
        return 0;
    }

    Tno* temp = pilhaN->topo;  
    pilhaN->topo = temp->prox; 

    free(temp);              
    pilhaN->qtd--;

    return 1;
}

int paginaAtual (PN* pilhaN){
    if(pilhaN != NULL && pilhaN->topo != NULL){
        printf("Pagina Atual: %d\n", pilhaN->topo->id_pagina);
        return 0;
    }
    return 1;
}