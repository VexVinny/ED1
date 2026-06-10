#ifndef BIGINT_H
#define BIGINT_H
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct _list BI_List;

BI_List create_list();

bool List_insert(BI_List*, char[]);

void List_print(BI_List*);


#endif