#include <stdio.h>

void swap(int *x1, int *x2){
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

int main(){
    int *x1 = 10, *x2 = 20;
    printf("x1 = %d\nx2 = %d\n", x1, x2);
    swap(&x1, &x2);
    printf("x1 = %d\nx2 = %d\n", x1, x2);
    return 0;
}