#include<stdio.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;

    a = 10;
    b = 1203812491;

    printf("A = %d\nB = %d\n", a, b);

    troca(&a, &b);

    printf("A = %d\nB = %d\n", a, b);
}