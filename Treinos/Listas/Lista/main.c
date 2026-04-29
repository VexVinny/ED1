#include "TLList.h"
#include <stdio.h>

int main(){
    TLList* lista1 = TLList_create();
    int V[] = {1, 2, 3, 4, 5}, i;
    for(i = 0; i<5; i++)
        if(!TLList_insert_begin(lista1, V[i]))
            printf("Ocorreu um erro ao inserir o V[%i]=%i\n", i, V[i]);
    TLList_print(lista1);


    int V2[] = {6, 7, 8, 9, 10};
    for(i = 0; i<5; i++)
        if(!TLList_insert_end(lista1, V2[i]))
            printf("Ocorreu um erro ao inserir o V[%i]=%i\n", i, V2[i]);
    TLList_print(lista1);
    return 0;
}