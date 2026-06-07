// 5. Write a recursive function to calculate the sum of first ‘n’ natural numbers
#include <stdio.h>

int sum(int n){
    if(n == 0){
        return 0;
    }

    return n+sum(n-1);
}
int main(){
    int a = 10;
    printf("The sum of first %d natural number is %d\n", a, sum(10));
    return 0;
}