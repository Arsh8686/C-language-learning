// 1. Write a program to print multiplication table of a given number n. 

#include <stdio.h>

int main(){
    int n, i = 1;

    printf("Enter n: ");
    scanf("%d", &n);
    do
    {
        printf("%d x %d = %d\n", n, i, n*i);
        ++i;
    } while (i<=10);
    
    return 0;
}