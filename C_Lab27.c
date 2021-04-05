#include<stdio.h>
#include<stdlib.h>

int main()
{
 int num;
 int i;
 printf(" enter the total numbers\n");
 scanf("%d", &num);

 int *arr = (int *)malloc(num*sizeof(int));
 printf("enter the values");
for(i=0; i<num; i++)
{
   scanf("%d", arr+i);
}
for( i=0; i<num; i++)
{
  printf(" enter arr[%d] = %d \n", i,*(arr+i));
}

return 0;
}
