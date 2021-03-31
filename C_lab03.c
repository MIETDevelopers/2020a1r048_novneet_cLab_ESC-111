#include<stdio.h>
int main()
{
   int num1, num2, num3;
   printf("enter the values of two numbers");
   scanf("%d %d", &num1, &num2);

   num3 = num1 + num2;
   printf("%d is the addition of two numbers\n", num3);

   num3 = num1 - num2;
   printf("%d is the substraction of two numbers\n", num3);

   num3 = num1*num2;
   printf("%d is the multiplication of two numbers\n", num3);

   num3 = num1/num2;
    printf("%d is the division of two numbers\n", num3);

    return 0;
}




