#include "Queue.h"

int main(){
    Queue* F1 = create_queue();
    int v[10] = {1, 2, 3, 4, 5};
    int temp;
    
    for(int i = 0; i < 5; i++){
        printf("Numero adicionado: %d\n", v[i]);
        Fila_enqueue(F1, v[i]);
    }
    
    printf("\n--- Invertendo a Fila ---\n\n");
    
    reverter(F1);

    printf("Mostrar fila (Desenfileirando):\n");
    for(int i = 0; i < 5; i++){
        Fila_dequeue(F1, &temp);
        printf("%d\n", temp);
    }
    
    free(F1);
    
    return 0; 
}