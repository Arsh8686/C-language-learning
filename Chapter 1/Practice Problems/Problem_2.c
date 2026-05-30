/*
2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. 
*/

#include <stdio.h>
int main(){
  int radius;
  int height;
  float circle_area;
  float cylinder_area;
  
  printf("Enter radius: ");
  scanf("%d", &radius);

  printf("Enter height: ");
  scanf("%d", &height);

  circle_area = 3.14 * radius * radius;
  cylinder_area = 2 * 3.14 * radius * (radius + height);

  printf("Area of Circle = %f", circle_area);
  printf("Area of Cylinder = %f", cylinder_area);

  return 0;
}