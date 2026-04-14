#ifndef RETA_H
#define RETA_H

typedef struct{
   float base, altura;
}retangulo;

retangulo* criarRetangulo(float a, float b);

float calcularArea(retangulo* r);

void destruir(retangulo* r);

#endif