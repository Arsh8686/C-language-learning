#include <stdio.h>

int main(){
    int i = 5;

    printf("The value of i is %d\n", i);

    i = i + 5;
    printf("The value of i is %d\n", i); // i = 10

    // printf("The value of i is %d\n", ++i); i = 11
    
    printf("The value of i is %d\n", i++); // i = 10
    printf("The value of i is %d\n", i); // i = 11
    printf("The value of i is %d\n", --i); // i = 10

    // ++i is use for increament while --i  is use for decreament

    i +=4; // same as i = 1 + 4 , i = 15
    printf("The value of i is %d\n", i);

    return 0;
}