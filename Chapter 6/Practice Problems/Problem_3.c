/* 3. Write a program to change the value of a variable to ten times of its current 
value.  */

#include <stdio.h>

int change(int*);
int change(int* a){
    *a = (*a)*10;
}
int main(){
    int i = 12;
    printf("The value of i is %d\n", i);
    change(&i);
    printf("The 10 times value of i is %d\n", i);
    return 0;
}