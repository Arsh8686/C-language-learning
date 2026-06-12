#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    a = 5; // sum function doesn't change the value of x coz copy of x is provided to sum in a.
    return a+b;
}
int main(){
    int x = 3, y = 9;
    printf("The sum of 3 and 9 is %d\n", sum(x, y));
    printf("The value of x is %d\n", x);
    return 0;
}