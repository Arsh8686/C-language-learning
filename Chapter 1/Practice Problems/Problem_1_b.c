/*  
1. Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user. 
*/ 

// b).

#include <stdio.h>
int main(){
    int length;
    int breadth;
    int area;
    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("Area of the Reactange is = %d", area);

    return 0;
}