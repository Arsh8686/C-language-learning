/*
3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit). 
*/

#include <stdio.h>

int main(){
    float celcius;
    float fahrenheit;

    printf("Enter the temperature in Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 1.8) + 32;

    printf("Fahrenheit value is = %f", fahrenheit);

    return 0;
}