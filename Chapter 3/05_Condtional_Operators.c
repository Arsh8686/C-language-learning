// condition ? expression-if-true : expression-if-false 

#include <stdio.h>

int main(){
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    marks>=33 ? printf("Pass") : printf("Fail");

    return 0;
}