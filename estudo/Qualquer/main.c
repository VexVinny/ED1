#include <stdio.h>
#include <stdlib.h>
#include "Ret.h"

int main(){
    Retangulo* r;
    float x, y, area;

    printf("Digite o valor da largura: ");
    scanf("%f", &x);
    
    printf("Digite o valor da altura: ");
    scanf("%f", &y);

    r = criarRetangulo(x, y);
    area = calcularArea(r);
    printf("O retangulo criado tem largura = %.2f e altura = %.2f, o calculo da area e igual a %.2f", x, y , area);
    free(r);
}