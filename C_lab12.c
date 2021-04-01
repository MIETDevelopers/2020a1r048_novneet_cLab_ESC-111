
 
#include<stdio.h>
int main()
{
  int num, i, count=0;
  printf("enter the number");
  scanf("%d", &num);
  i=2;
  while(i<=num/2)
   {
   if(num%i==0)
    {
      count = 1;
      break;
    }
    i++;
  }
  if(count==0)
   printf("it is a prime number");
  else
    printf(" it is not a prime number");
 return 0;
}
