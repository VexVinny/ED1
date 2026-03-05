#include <stdio.h>

/*Desafio 2 (código)
Crie um vetor de 10 inteiros:
leia os valores
imprima só os valores maiores que a média
*/

int main() {
    int V[10];
    float media, soma = 0;

    printf("digite 10 valores:\n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &V[i]);
        soma += V[i];
    }

    media = soma / 10;

    printf("numeoras acima da media:\n");
    for(int i = 0; i < 10; i++){
        if(V[i] > media){
            printf("%d\n", V[i]);
        }
    }

    printf("FIm!");
    return 0;
}
