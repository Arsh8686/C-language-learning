#include <stdio.h>

int main(){
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i); 
        ++i;
    } while (i<=10);
    
    return 0;
}

/*
do while loop run atleast one time and then it checks
the conditon in while with increament in i with 1 due 
to ++i and if the condition is true then code run again.
*/