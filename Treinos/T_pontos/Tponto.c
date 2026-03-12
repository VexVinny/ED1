#include "TPonto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct _ponto{
    float x, y;
};
 
TPonto* TPonto_create(float x, float y){
    TPonto *novo = malloc(sizeof(TPonto));
    if(novo!=NULL){
        novo->x = x;
        novo->y = y;
    }
    return novo;
}

void TPonto_print(TPonto* ponto){
    if(ponto != NULL){
        printf("(%0.2f, %0.2f)\n", ponto->x, ponto->y);
    }
}

void TPonto_deletar(TPonto* ponto){
    if(ponto != NULL){
        free(ponto);
    }
}

TPonto* TPonto_modificar(TPonto* ponto, float x, float y){
    if(ponto != NULL){
        ponto->x = x;
        ponto->y = y;
    }
    return ponto;
}

void TPonto_calcularDistancia(TPonto* ponto1, TPonto* ponto2){
    if(ponto1 != NULL && ponto2 != NULL){
        float distancia = sqrt(pow(ponto2->x - ponto1->x, 2) + pow(ponto2->y - ponto1->y, 2));
        printf("A distância entre os pontos é: %0.2f\n", distancia);
    }
}