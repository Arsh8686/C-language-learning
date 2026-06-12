/* 1. Write a program to print the address of a variable. Use this address to get the 
value of the variable.  */

#include <stdio.h>

int main(){
    int a = 85;
    int* b = &a;
    char c = 'N';
    char* d = &c;

    printf("The address of a and c are %p and %p\n", b, d);
    printf("The values at address %p and  %p are %d and %c\n", b, d, *b, *d);
    return 0;
}