#include "Queue.h"


int main(){
    Queue* F1 = create_queue();
    int temp;
    int v[7] = {1, 2, -3, 4, -5, 6, -7};

    for(int i = 0; i < 7; i++){
        Int_enqueue(F1, v[i]);
    }

    positivar(F1);

    for(int i = 0; i < 7; i++){
        Int_dequeue(F1, &temp);
        printf("%d\n", temp);
    }

    free(F1);

    return 0;
}