#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;

    // Logical AND
    printf("a > 5 && b < 10 = %d\n", (a > 5 && b < 10));

    // Logical OR
    printf("a < 5 || b < 10 = %d\n", (a < 5 || b < 10));

    // Logical NOT
    printf("!(a > 5) = %d\n", !(a > 5));

    return 0;
}