#ifndef NAV_H
#define NAV_H

typedef struct no{
    int id_pagina;
    struct no* prox;
} Tno;

typedef struct Pilhanavegador{
    Tno* topo;
    int qtd;    
} PN;

PN* criar_navegador();

int visitarPagina(PN*, int);

int voltarPagina(PN*);

int paginaAtual (PN*);

#endif