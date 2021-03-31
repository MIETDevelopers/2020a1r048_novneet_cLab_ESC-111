#include<stdio.h>
int main()
{
   int num1, num2, num3;
   int max;

  printf("enter the values of three numbers");
  scanf("%d %d %d", &num1, &num2, &num3);

  max = num1;
   if(max<num2)
   {
      max = num2;
   }
   if(max<num3)
   {
      max = num3;
   }
  printf("%d is the max of all the numbers", max) ;
  return 0;
}
