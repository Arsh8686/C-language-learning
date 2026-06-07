// 4. Write a program using recursion to calculate nth element of Fibonacci series. 
#include <stdio.h>

int fibonacci(int n);
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int a = 6;
    printf("The %dth number of Fibonacci series is = %d", a, fibonacci(6));
    return 0;
}