// 2. Write a program to check whether a number is divisible by 97 or not. 

#include <stdio.h>

int main(){
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("The Remainder of a = %d divisible by 97 is %d", a, a%97);
    return 0;
}