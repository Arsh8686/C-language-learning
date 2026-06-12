#include <stdio.h>

int main(){
    int i = 91;
    int *j = &i; // j is a pointer, ponting towards i, j is an integer pointer.
    
    printf("The value of i is %d\n", i);
    printf("The adress of i is %p\n", &i);
    printf("The adress of i is %p\n", j);
    printf("The value at adress %p is %d\n", j, *j);

    return 0;
}