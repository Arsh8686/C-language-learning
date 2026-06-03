// 4. Write a program to sum first ten natural numbers using while loop. 

#include <stdio.h>

int main(){
    int sum = 0, i = 1;
    while (i<=10)
    {
        sum = sum + i;
        ++i;
    }
    printf("%d", sum);
    
    return 0;
}