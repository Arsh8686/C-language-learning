#include <stdio.h>

int main(){
    int a =10;
    int b=4;
    int c=5;

    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d", 3*a/2*b + 7*c);
    // 3*a/2*b + 7*c
    // 30/2*b + 35
    // 15*4 + 35
    // 60 + 35
    // 95
    return 0;
}