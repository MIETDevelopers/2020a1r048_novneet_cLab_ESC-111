#include<stdio.h>
int main()
{
 int arr[30];
 int size, i;
 int max;
 int index = 0;
 printf("enter the size of array\n");
 scanf("%d",&size);
 printf(" enter the values of array\n");

 for(i=0; i<size; i++)
  {
    scanf("%d", &arr[i]);
  }

  max=arr[0];
  for(i=0; i<size; i++)
   {
     if(max < arr[i])
        max=arr[i];
        index=i;
   }
 printf("%d is the maximum element in the array\n", max);
 printf("%d is the maximum index in the array", index);

 return 0;
}
