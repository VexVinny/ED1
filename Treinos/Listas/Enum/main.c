#include "TDList.h"
#include <stdio.h>

int main(){
    //A lista1 só insere no início
    TDList* lista1 = TDList_create(NO_INICIO);
    //A lista2 só insere no fim
    TDList* lista2 = TDList_create(NO_FIM);
    int V[] = {1, 2, 3, 4, 5}, i;
    for(i = 0; i<5; i++){
        if(!TDList_insert(lista1, V[i]))
            printf("Ocorreu um erro ao inserir o V[%i]=%i\n", i, V[i]);
        if(!TDList_insert(lista2, V[i]))
            printf("Ocorreu um erro ao inserir o V[%i]=%i\n", i, V[i]);
    }
    puts("Lista 1 (Inicio):");
    TDList_print(lista1);
    puts("Lista 2 (Fim):");
    TDList_print(lista2);
    return 0;
}