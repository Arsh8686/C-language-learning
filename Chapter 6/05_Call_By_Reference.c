#include <stdio.h>
int sum(int* , int*);

int sum(int* a, int* b){
    *a = 5; //sum should change the value of x coz adress of variable provided to sum function in a.
    return (*a + *b);
}
int main(){
    int x = 3, y = 9;
    printf("The sum of 3 and 9 is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}