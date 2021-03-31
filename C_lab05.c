#include<stdio.h>
int main()
{
  float radius, area, perimeter, circumferance;
  float length, breadth, side;

   printf("enter the value of radius of the circle");
   scanf("%f", &radius);
   area = 3.14 * radius * radius;
   circumferance = 2*3.14*radius;
   printf("%f is the area \n", area);
   printf("%f is the circumferance \n", circumferance);

   printf("enter the values of length and breath of rectangle\n");
   scanf("%f %f", &length, &breadth);
   area = length * breadth;
   perimeter = 2*(length + breadth);
   printf("%f is the area of the rectangle\n", area);
   printf("%f is the perimeter of the rectangle\n", perimeter);

   printf("enter the side of square");
   scanf("%f", &side);
   area = side * side;
   perimeter = 4 * side;
   printf("%f is the area \n",area);
   printf("%f is the perimeter\n", perimeter);
   return 0;

}
