#include "Ed.h"

int main(){
    EDList* lista = creat_list();
    int n, m;

    printf("Quantas pessoas? ");
    scanf("%d", &n);
    printf("QUal numero a sortear? ");
    scanf("%d", &m);
    
    for(int i = 1; i < n; i++){
        ED_insert(lista, i++);
    }

    ED_sorteio(lista, n, m);

    EDList_print(lista);

}