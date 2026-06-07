// 2. Write a function to convert Celsius temperature into Fahrenheit. 
#include <stdio.h>
float convertor(float celsius){
    return (celsius*9/5)+32;
}
int main(){
    float a = 38.0;
    printf("Fahrenheit = %.2f\n", convertor(a));
    return 0;
}