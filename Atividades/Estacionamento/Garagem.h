#ifndef GAR_H
#define GAR_H

typedef struct _gar{
    int gar;
    int index;
} Gar;

typedef struct _auxgar{
    int gar;
    int index;
}auxGar;

Gar* gar_create();
auxGar* gar_creat();

int gar_push(Gar* carro);

int gar_pop(Gar* carro, auxGar* auxCarro);





#endif