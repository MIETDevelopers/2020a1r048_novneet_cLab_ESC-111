#include<stdio.h>
int main()
{
int a[10];
int i, j, n;
int temp;
temp = 0;
printf("enter the size of array\n");
scanf("%d",&n);
for(i=0; i<n; i++)
  {
    printf("enter the elements\n");
    scanf("%d",&a[i]);
    printf("a[%d]=%d \n" ,i,a[i]);
  }
for(i=0; i<n-1; i++)
{
   for(j=0; j<n-1-i; j++)
   {
     if(a[j]>a[j+1])
     {
       temp = a[j];
       a[j] = a[j+1];
       a[j+1] = temp;
     }
   }
}
for(i=0; i<n; i++)
printf(" %d \t", a[i]);
printf("\n");
return 0;
}
