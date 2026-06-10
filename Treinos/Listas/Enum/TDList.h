#ifndef TDList_H
#define TDList_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define NO_FIM 0
#define NO_INICIO 1
#define ORDENADA 2

typedef struct _list TDList;

TDList* TDList_create(char);

bool TDList_insert(TDList*, int);

void TDList_print(TDList*);

#endif