/*
5. Write a program to determine whether a character entered by the user is 
lowercase or not. 
*/

#include <stdio.h>

int main(){
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if('z'>=ch && 'a'<=ch){
        printf("The letter entered is lowecase");
    }

    else{
        printf("The letter entered is not lowercase");
    }
    return 0;
}
