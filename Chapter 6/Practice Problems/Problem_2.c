/* 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why? */

#include <stdio.h>

void address(int*);
void address(int* a){
    printf("Address = %p\n", a); 
}

int main(){
    int i = 24;
    int* j = &i;
    printf("The address of i is %p\n", j);
    address(&i);
    return 0;
}

/* Yes, the addresses are the same because the address of i is passed to the function.
The pointer parameter a receives a copy of that address,
so both &i in main() and a inside the function refer to the same memory location of i. */