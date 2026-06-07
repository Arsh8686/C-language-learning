/* 6. Write a program using function to print the following pattern (first n lines) 
* 
* * * 
* * * * *  */
#include <stdio.h>

void pattern(int n);
void pattern(int n){
    if(n == 1){
        printf("*\n");
        return;
    }

    pattern(n-1);
    for(int i = 0; i < (2*n - 1); i++){
        printf("* ");
    }
    printf("\n");
}


int main(){
    int a = 3;
    pattern(3);
    return 0;
}