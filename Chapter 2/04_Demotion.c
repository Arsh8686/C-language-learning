#include <stdio.h>

int main(){
    float a;
    int b;

    printf("Enter the number: ");
    scanf("%f", &a);

    b=a;

    printf("The value of a is %f\n", a);
    printf("the Demoted value of a is %d", b); // Demotion of the number entered
    return 0;
}