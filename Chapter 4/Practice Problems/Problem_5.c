// 5. Write a program to implement program 4 using ‘for’ and ‘do-while’ loop.

#include <stdio.h>

int main(){
    int sum = 0, i = 1;
    /* do{
        sum+= i;
        i++;
    } while(i<= 10);
 */

    for  (i = 1; i <= 10; i++)
    {
        sum += i;
    }
       

    printf("Sum = %d", sum);
    return 0;
}