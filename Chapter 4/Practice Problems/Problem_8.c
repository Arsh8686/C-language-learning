// 8. Repeat 7 using while loop.

#include <stdio.h>

int main(){
    int n, i=1,  factorial = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    while (i<=n)
    {
        factorial *= i;
        ++i;
    }

    printf("The Factorial of %d is %d", n, factorial);

    return 0;
}