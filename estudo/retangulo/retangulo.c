#include<stdio.h>
#include<stdlib.h>
#include "Retangulo.h"

retangulo* criarRetangulo(float base, float altura){
    retangulo* novo = (retangulo*) malloc(sizeof(retangulo));

    if(novo != NULL){
        novo->base = base;
        novo->altura = altura;
        return novo;
    }
    return NULL;
    
}

float calcularArea(retangulo* novo){
    float area = novo->base * novo->altura;
    return area;
}

void destruir(retangulo* novo){
    if(novo != NULL){
        free(novo);
    }
}