#include "Garagem.h"
#include <stdio.h>
#include <stdlib.h>

Gar* gar_create(){
    Gar* carro = (Gar*) malloc(sizeof(Gar));
    if(carro != NULL){
        carro->index = -1;
    }
    return carro;
}

void gar_push(Gar* carro, int valor){
    if(carro != NULL){
        if(carro->index < 9){ 
            carro->index++;
            carro->gar[carro->index] = valor;
        } else {
            printf("overflow\n"); 
        }
    }
}

void gar_pop(Gar* principal, Gar* secundaria, int Busca){
    int encontrado = 0;

    while(principal->index != -1){
        int carroAtual = principal->gar[principal->index];
        principal->index--; 
        
        printf("%d,", carroAtual);
        
        if(carroAtual == Busca){
            printf("\n");
            encontrado = 1;
            break;
        } else {
            secundaria->index++;
            secundaria->gar[secundaria->index] = carroAtual;
        }
    }
    
    if(encontrado == 0){
        printf("underflow\n");
    }
    while(secundaria->index != -1){
        int devolveCarro = secundaria->gar[secundaria->index];
        secundaria->index--;
        
        principal->index++;
        principal->gar[principal->index] = devolveCarro;
    }
}