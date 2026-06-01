#include <stdio.h>

int main(){
    int age; // <=(Less than or equal to) >=(Greater than or equal to) ==(Equal to) !=(Not equal to)

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>18){
        printf("Your age is greater than or eaqul to 18");
    }

    if(age==18){
        printf("Your age is 18");
    }

    if(age<18){
        printf("Your age is less than 18");
    }
    return 0;
}