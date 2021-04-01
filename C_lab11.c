

#include<stdio.h>
int main()
{
 int num, i, temp = 0;
 int sum = 0;
 printf("enter the number");
 scanf("%d", &num);
 while(num>0)
  {
    temp = num%10;
    sum = sum + temp;
    num= num/10;
  }
 printf("\n sum = %d", sum);


 return 0;
}
