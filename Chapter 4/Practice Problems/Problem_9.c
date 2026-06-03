// 9. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main(){
    int n, prime = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n<=1){
        prime = 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            prime = 0;
            break;
        }
        
    }

    if(prime){
        printf("This number is a prime numeber");
    }
    else{
        printf("This number is not a prime number");
    }
    
    return 0;
}