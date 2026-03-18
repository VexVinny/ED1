#ifndef pilha.h
#define pilha.h



typedef struct {
    int data[5];
    int index;
} Pilha;

Pilha* cria_pilha();
void push(Pilha* p, int valor);
int pop(Pilha* p);
int ver_pilha(Pilha* p);
void destruir(Pilha* p);

#endif // pilha.h
