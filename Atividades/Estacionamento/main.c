#include "Garagem.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;
    int valor;
    
    Gar* c;
    Gar* ac;

    c = gar_create();
    ac = gar_create();
    
    do {
        scanf(" %c %d", &op, &valor); 
        
        if(op == 'i'){
            gar_push(c, valor);
        } else if(op == 'r'){
            gar_pop(c, ac, valor);
        }
    } while(op != '0');

    free(c);
    free(ac);
    
    return 0;
}