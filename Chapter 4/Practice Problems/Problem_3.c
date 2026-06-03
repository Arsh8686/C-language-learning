/* 3. What can be done using one type of loop can also be done using the other two 
types of loops – true or false? */

#include <stdio.h>

int main(){
    int i = 0;
    /* while (i<=5)
    {
        printf("%d\n", i);
        ++i;
    } */

    /* do
    {
        printf("%d\n", i);
        ++i;
    } while (i<=5);
     */

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}