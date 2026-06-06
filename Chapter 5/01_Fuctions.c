#include <stdio.h>

int sum(int a, int b); // Function prototype

int sum(int a, int b){ // function body
    return a+b; 
}

int main(){
   int result = sum(12,13); // variable declaration
   printf("Sum = %d\n", result); 
    return 0;
}