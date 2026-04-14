#include "Retangulo.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
    retangulo* ret1 = criarRetangulo(10, 5);

    float area = calcularArea(ret1);

    printf("A area desse retangulo é: %.2f\n", area);

    destruir(ret1);
}