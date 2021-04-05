#include<stdio.h>
int main()
{
  int num;
  int temp;
  int n;
  int result=0;
  int realnum;
  printf("enter the value of number");
  scanf("%d", &realnum);
  num = realnum;
while (num != 0)
    {
        num /= 10;
        ++n;
    }
  num = realnum;
  while(num!=0)
   {
     temp= num%10;
     result= result+(temp*temp*temp);
      num=num/10;
  }
 if( result == num)
   printf("number is armstrong");
else
   printf("it is not a armstrong number");

return 0;
}
