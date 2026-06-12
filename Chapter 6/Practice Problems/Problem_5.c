/* 5. Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main(). */ 

#include <stdio.h>

void calculate(int* a, int* b, int* sum, float* average);
void calculate(int* a, int* b, int* sum, float* average){
    *sum = *a + *b;
    *average = (*a + *b)/2.0;
}

int main(){
    int x = 10, y = 15, s;
    float av;
    calculate(&x, &y, &s, &av);
    printf("Sum = %d\n", s);
    printf("Average = %.2f\n", av);
    return 0;
}