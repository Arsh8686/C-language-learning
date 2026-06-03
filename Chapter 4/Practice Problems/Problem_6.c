/* 6. Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). */

#include <stdio.h>

int main(){
    int n=8, i = 1, sum = 0;

    do
    {
        sum += n*i;
        ++i;
    } while (i<=10);

    printf("%d\n", sum);
    
    return 0;
}