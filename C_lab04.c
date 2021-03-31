#include<stdio.h>
int main()
{
  float radius, area, perimeter;
  float length, breadth;
  float side;

  radius = 5;
  area = 3.14*5*5;
  perimeter = 2*3.14*5;

   printf("%f is the radius \n", radius);
   printf("%f is the area of circle \n", area);
   printf("%f is the circumferance \n", perimeter);

  length = 5.4;
  breadth = 4.4;
  perimeter = 2* (length + breadth);
  area = length * breadth;

   printf("%f is the length of rectangle \n", length);
   printf("%f is the breadth of rectangle \n", breadth);
   printf("f is the  perimeter of rectangle \n", perimeter);
   printf("%f is the area", area);

   side = 5;
   area = 5*5;
   perimeter = 4*5;

   printf("%f is the side of square \n", side);
   printf("%f is the area of square \n", area);
   printf("%f is the perimter of the square \n", perimeter);

   return 0;

}




