#include <stdio.h>

int main(){
    int i = 91;
    int *j = &i;
    int **k = &j;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(k));
    printf("The adress of i is %p\n", &i);
    printf("The adress of j is %p\n", k);
    printf("The value at adress %p is %d\n", j, *j);

    return 0;
}