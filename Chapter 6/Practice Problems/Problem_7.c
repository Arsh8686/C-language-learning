/* 7. Try problem 3 using call by value and verify that it does not change the value of 
the said variable.  */

#include <stdio.h>

int change(int);
int change(int a){
    a = a*10;
}
int main(){
    int i = 12;
    change(i);
    printf("The 10 times value of i is %d", i);
    return 0;
}