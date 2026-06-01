#include <stdio.h>

int main(){
    int age;

    printf("Enter Your age: ");
    scanf("%d", &age);

    if(age>10){
        printf("Your age is greater than 10");
    }

    else{
        printf("You age is not greater than 10");
    }
    return 0;
}