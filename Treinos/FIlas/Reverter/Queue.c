#include "Queue.h"

#define MAX 5

typedef struct _queue{
    int qtd, inicio, fim;
    int dados[MAX];
};

Queue* create_queue(){
    Queue* Fila = malloc(sizeof(Queue));
    
    if(Fila != NULL){
        Fila->qtd = 0;
        Fila->inicio = 0;
        Fila->fim = 0;
    }
    return Fila;
};

int Fila_enqueue(Queue* Fila, int info){
    if(Fila == NULL || full_queue(Fila)){
        return 0;
    }else{
        Fila->dados[Fila->fim] = info;
        Fila->fim = (Fila->fim + 1) % MAX;
        Fila->qtd++;
        return 1;
    }
}

int Fila_dequeue(Queue* Fila, int* valor){
    if(Fila == NULL || empty_queue(Fila)){
        return 0;
    }else{
        *valor = Fila->dados[Fila->inicio];
        Fila->inicio = (Fila->inicio + 1) % MAX;
        Fila->qtd--;
        return 1;
    }
}

int full_queue(Queue* Fila){
    return Fila->qtd == MAX;
}

int empty_queue(Queue* Fila){
    return Fila->qtd == 0;
}

int reverter(Queue* Fila) {
    int temp;
    if ((empty_queue(Fila))) {
        return 1;
    }
    
    Fila_dequeue(Fila, &temp);

    reverter(Fila);

    Fila_enqueue(Fila, temp);

    return 1;
}