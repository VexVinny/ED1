#include "Queue.h"

#define MAX 7

typedef struct _queue{
    int qtd, final, inicio;
    int data[MAX];
};

Queue* create_queue(){
    Queue* Fila = malloc(sizeof(Queue));
    if(Fila != NULL){
        Fila->qtd = 0;
        Fila->final = 0;
        Fila->inicio = 0;
    }
    return Fila;
}

int Int_enqueue(Queue* Fila, int info){
    if(Fila == NULL || full_queue(Fila)) return 1;

    Fila->data[Fila->final] = info;
    Fila->final = (Fila->final + 1) % MAX;
    Fila->qtd++;
    return 0;
}

int Int_dequeue(Queue* Fila, int* info){
    if(Fila == NULL || empty_queue(Fila)) return 1;
    info = Fila->data[Fila->inicio];
    Fila->inicio = (Fila->inicio + 1) % MAX;
    Fila->qtd--;
    return 0;
}

int full_queue(Queue* Fila){
    return (Fila->qtd == MAX);
}

int empty_queue(Queue* Fila){
    return (Fila->qtd == 0);
}

int positivar(Queue* Fila){
    int temp;

    for(int i = 0; i < Fila->qtd; i++){
        Fila_dequeue(Fila, &temp);

        if(temp > 0){
            Fila_enqueue(Fila, temp);
        }
    }


}
