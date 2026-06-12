#include <stdio.h>
void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 8;
    swap(&x, &y);
    printf("The value of x and y are %d and %d", x, y);
    return 0;
}