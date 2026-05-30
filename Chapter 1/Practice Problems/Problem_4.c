/*
4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest. 
*/

#include <stdio.h>
int main(){
    float intrest; // simple intrest
    float principle; // ammount borrow or invest
    float rate; // rate of intrest in percentage 
    float time; // time of borrow or invest in days

    printf("Enter the value of Principle ammount: ");
    scanf("%f", &principle);

    printf("Enter the rate of intrest: ");
    scanf("%f", &rate);

    printf("Enter the Time of borrow or invest: ");
    scanf("%f", &time);
    
    intrest = principle * rate * time * 0.01 / 365;

    printf("The value of Simple Intrest is = %f", intrest);

    return 0;
}