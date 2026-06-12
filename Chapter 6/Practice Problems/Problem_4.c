// 4. Write a function and pass the value by reference. 

#include <stdio.h>
int sum(int*, int*);
int sum(int* a, int* b){
    return (*a + *b);
}
int main(){
    int i = 12;
    int j = 13;
    printf("The sum of i and j is = %d\n", sum(&i, &j));
    return 0;
}