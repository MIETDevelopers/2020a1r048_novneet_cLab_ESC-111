#include<stdio.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float mul(float num1, float num2);
float div(float num1, float num2);

int main()
{
  int num1, num2;
  char op;
  printf("enter the values of number1 operator  number2\n");
  scanf("%f %c %f", &num1, &op, &num2);

  switch(op)
  {  case '+':
    printf("%f", add(num1, num2));
    break;
  case '-':
    printf("%f", sub(num1, num2));
    break;
  case '*':
    printf("%f", mul(num1, num2));
    break;
  case '/':
    printf("%f", div(num1, num2));
    break;

 }
  return 0;
}

float add(float num1, float num2)
   {
     return num1 + num2;
   }

float sub(float num1, float num2)
  {
  return num1 - num2;
  }
float mul(float num1, float num2)
  {
  return num1 * num2;
  }
float div(float num1, float num2)
 {
  return num1 / num2;
 }


