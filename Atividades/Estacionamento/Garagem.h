#ifndef GAR_H
#define GAR_H

typedef struct{
    int gar[10];
    int index;
} Gar;

Gar* gar_create();

void gar_push(Gar* carro, int valor);

void gar_pop(Gar* carro, Gar* auxCarro, int valor); 

#endif