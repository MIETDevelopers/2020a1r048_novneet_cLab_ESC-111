#include<stdio.h>
int main()
{
 int num;
 int a, b, i, c;
 a=0;
 b=1;
 printf("enter the  number of terms of the series\n");
 scanf("%d", &num);
 printf("fibonacci series: ");
 for(i=1; i<=num; i++)
  {
    printf("%d", a);
    c = a + b;
    a = b;
    b= c;
  }

 return 0;
}
