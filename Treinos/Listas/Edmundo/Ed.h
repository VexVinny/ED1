#ifndef ED_H
#define ED_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct _list EDList;


EDList* creat_list();

bool ED_insert(EDList*, int);

bool ED_sorteio(EDList*, int, int);

void EDList_print(EDList*);

#endif