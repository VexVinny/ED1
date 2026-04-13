#include <stdio.h>
#include <stdlib.h>

int* fabricarArray(int tamanho){
    int *vetor = malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++){
        vetor[i] = 7;
    }

    return vetor;
}

int main(){
    int *vetorMain = fabricarArray(5);

    for(int i = 0; i < 5; i++){
        printf("Linha %d: %d\n", i + 1, vetorMain[i]);
    }

    free(vetorMain);

}

