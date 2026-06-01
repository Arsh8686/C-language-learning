/*
3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
      Income slabs         Tax
         2.5-5.0L           5%
         5.0-10.0L          20%
         Above 10.0L        30%
Note that there is no tax below 2.5L. Take income amount as an input from the user. 
*/

#include <stdio.h>

int main(){
    float income;
    int Tax;

    printf("Enter Your Income(In Lakhs): ");
    scanf("%f", &income);

    if(5.0>=income && 2.5<=income){
        Tax = 5;
    }

    else if(10.0>=income && 5.0<income){
        Tax = 20;
    }

    else if(10.0<income){
        Tax = 30;
    }

    else{
        Tax = 0;
    }

    float result = income * Tax / 100;

    printf("Income Tax = %f lakhs", result);

    return 0;
}