#ifndef PILHA_H
#define PILHA_H

typedef struct {
    int data[5];
    int index;
} Pilha;

Pilha* cria_pilha();
void push(Pilha* p, int valor);
int pop(Pilha* p, int valor);
int ver_pilha(Pilha* p);
void destruir(Pilha* p);
void verificar_parenteses(char* str, Pilha* p);

#endif
