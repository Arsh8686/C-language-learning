#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    
    printf("Enter the number a : ");
    scanf("%d", &a);

    printf("Enter the number b : ");
    scanf("%d", &b);

    c = a%b; // "%" an operator called Modulus which is use to find remainders of the numbers

    printf("The remainder of a = %d divided by b =%d is = %d", a, b, c);
    return 0;
}