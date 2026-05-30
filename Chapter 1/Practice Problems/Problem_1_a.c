/*  
1. Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user. 
*/ 

// a).

#include <stdio.h>
int main(){
    int length = 50;
    int breadth = 50;
    int area;

    area = length * breadth;

    printf("Area of the Reactangle is %d", area);
    return 0;
}