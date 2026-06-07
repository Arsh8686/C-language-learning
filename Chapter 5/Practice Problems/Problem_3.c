/* 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2. */
#include <stdio.h>
float weight(float mass);
float weight(float mass){
    float g = 9.8;
    return mass*g; // mass should be in Kg
}

int main(){
    float m = 12.0;
    printf("Weight = %.2f\n", weight(m));
    return 0;
}