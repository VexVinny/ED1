#include "Frac.h"
#include<stdio.h>
#include<stdlib.h>

struct _frac{

    float num;
    float den;

};

Frac* Frac_create(float num,float den){
    Frac* novo = malloc(sizeof(Frac));
    if(novo!=NULL){
        novo->num = num;
        novo->den = den;
    }
    return novo;
}

void Frac_print(Frac* f){
    printf("%.2f/%.2f\n",f->num,f->den);
}

void Frac_soma(Frac* f1, Frac* f2){
    if(f1->den == f2->den){
        printf("Soma:\n%.2f / %.2f\n",f1->num + f2->num, f1->den);
        return;
    }else{
        float num = f1->num * f2->den + f2->num * f1->den;
        float den = f1->den * f2->den;
        printf("Soma:\n%.2f / %.2f\n",num,den);
        return;
    }
}

void Frac_mult(Frac* f1, Frac* f2){
    float num = f1->num * f2->num;
    float den = f1->den * f2->den;

    printf("Multiplicacao: %.2f/%.2f\n",num,den);
}

int Frac_equiv(Frac* f1, Frac* f2){
    return (f1->num * f2->den == f2->num * f1->den);
}