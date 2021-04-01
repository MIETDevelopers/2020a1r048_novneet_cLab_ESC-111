#include<stdio.h>
int main()
{
  int n, i, max=0, num;
  printf("how many numbers");
  scanf("%d", &num);
  for(i=1; i<=num; i++)
   {
     printf("enter the number");
     scanf("%d", &n);
     if(n>max)
      max = n;
   }
    printf("/n maximum = %d", max);

return 0;
}
