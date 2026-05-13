#ifndef POSITIVAR_H
#define POSITIVAR_H
#include<stdio.h>
#include<stdlib.h>


typedef struct _queue Queue;

Queue* create_queue();

int Int_enqueue(Queue*, int);

int Int_dequeue(Queue*, int*);

int full_queue(Queue*);

int empty_queue(Queue*);

int positivar(Queue*);


#endif