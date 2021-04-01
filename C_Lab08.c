#include<stdio.h>
int main()
{
  int num, i, fact=1;
  printf("enter the number");
  scanf("%d", &num);
  for(i=1; i<=num; i++)
   {
    fact=fact*i;
   }
   printf("%d is the factorial", fact);
   return 0;
}
