#ifndef PILHA_H
#define PILHA_H

typedef struct _pilha Pilha;

Pilha* criar_pilha();

int push_pilha(Pilha*, int);

int pop_pilha(Pilha*);

int ver_topo(Pilha*);

void destruir_pilha(Pilha*);

int ver_tamanho(Pilha*);

int pilha_cheia(Pilha*);

int pilha_vazia(Pilha*);


#endif