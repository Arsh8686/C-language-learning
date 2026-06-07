// 1. Write a program using function to find average of three numbers. 

#include <stdio.h>
float average(float a, float b, float c);
float average(float a, float b, float c){
    return (a+b+c)/3;
}
int main(){
    float p = 4.0, q = 5.0, r = 7.0;
    printf("Average = %.2f\n", average(p, q, r));
    return 0;
}