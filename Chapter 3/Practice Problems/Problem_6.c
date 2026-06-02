/*
6. Write a program to find greatest of four numbers entered by the user. 
*/

#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Enter a four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max = a;

    if(b>max){
        max = b;
    }

    if(c>max){
        max = c;
    }

    if(d>max){
        max = d;
    }

    printf("The greatest of four numbers entered %d", max);

    return 0;
}
