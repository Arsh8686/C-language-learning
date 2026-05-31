#include <stdio.h>

int main(){
    float a;
    int b;

    printf("Enter the number: ");
    scanf("%d", &b);

    a=b;

    printf("The value of a is %d\n", b);
    printf("the Promoted value of a is %f", a); // Promotion of the number entered
    return 0;
}