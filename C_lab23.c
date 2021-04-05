#include<stdio.h>
int fibo(int n)
{
  if(n==0)
  return 0;
  else if(n==1)
   return 1;
   else
   return( fibo(n-1)  + fibo(n-2));
  }

 int main()
 {
   int n, i;
   printf("enter the total terms of series");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
     printf("%d\n", fibo(i));
   }
   return 0;
 }
