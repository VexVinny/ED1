#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Quantas notas você quer cadastrar? ");
    scanf("%d", &n);

    float *notas = malloc(n * sizeof(float));

    for(int i = 0; i < n; i++){
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i < n; i++){
        printf("Nota %.2f\n\n", notas[i]);
    }
    free(notas);
    return 0;
}

