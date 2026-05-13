#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdlib.h>


typedef struct _queue Queue;

Queue* create_queue();

int Fila_enqueue(Queue*, int);

int Fila_dequeue(Queue*, int*);

int full_queue(Queue*);

int empty_queue(Queue*);

int reverter(Queue*);

#endif