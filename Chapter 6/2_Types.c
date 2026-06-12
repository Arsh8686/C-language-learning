#include <stdio.h>

int main(){
    float i = 9.8;
    float *j = &i;

    char I = 'A';
    char *J = &I;

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The value at address %p is %.1f\n", j, *(&i));
    printf("\n");
    printf("The address of I is %p\n", &I);
    printf("The address of I is %p\n", J);
    printf("The value at address %p is %c\n", J, *(&I));


    return 0;
}