#include "Lista.h"
#include <stdio.h>

int main(){
    int *maior, *pos;
    TLList* lista1 = TLList_create();
    int V[] = {6, 1, 3, 9, 4}, i;
    for(i = 0; i<5; i++){
        if(!TLList_insert(lista1, V[i])){
            printf("Ocorreu um erro ao inserir o V[%i]=%i\n", i, V[i]);
        }
    }

    TLList* lista2 = TLList_create();
    int V2[] = {8, 7, 2, 5, 10};
    for(i = 0; i<5; i++){
        if(!TLList_insert(lista1, V2[i])){
            printf("Ocorreu um erro ao inserir o V2[%i]=%i\n", i, V2[i]);
        }
    }

    TLList* lista3 = TLList_conca(lista1, lista2);

    TLList_print(lista3);

    int n;
    printf("Quantos velores quer remover?");
    scanf("%d", &n);
    TLList_removeN(lista3, n);

    TLList_print(lista3);

    TTList_maiorE(lista3, &maior, &pos);
    
    printf("o maior elemento da lista é %d e está na posição %d\n", maior, pos);

    return 0;
}