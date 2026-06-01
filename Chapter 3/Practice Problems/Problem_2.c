/* 2. Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */

#include <stdio.h>

int main(){
    int Physics, Maths, Chemistry;
    float percentage;
    printf("Enter Physics Marks: ");
    scanf("%d", &Physics);

    printf("Enter Maths Marks: ");
    scanf("%d", &Maths);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &Chemistry);

    percentage = (Physics+Maths+Chemistry)*100 / 300;

    if(percentage>100 || Physics>100 || Maths>100 || Chemistry>100){
        printf("You have entered wrong marks");
    }

   else{
    if(percentage>=40 && Physics>=33 && Maths>=33 && Chemistry>=33){
        printf("You are Passed");
    }

    else{
        printf("You are failed");
    }
   }


    return 0;
}