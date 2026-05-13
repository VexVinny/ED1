#ifndef TLLIST_H
#define TLLIST_H
#include <stdbool.h>

typedef struct _list TLList;

TLList* TLList_create();

bool TLList_insert(TLList*, int);

void TLList_print(TLList*);

#endif