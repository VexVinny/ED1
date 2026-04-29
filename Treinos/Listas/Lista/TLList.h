#ifndef TLLIST_H
#define TLLIST_H
#include <stdbool.h>

typedef struct _list TLList;

TLList* TLList_create();

bool TLList_insert_begin(TLList*, int);

bool TLList_insert_end(TLList*, int);

void TLList_print(TLList*);

#endif