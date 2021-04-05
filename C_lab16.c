#include<stdio.h>
int main()
{
   int arr[20];
   int size, search, found;
   int i;
   printf("enter the elements of the array(maximum limit is 20)\n");
   scanf("%d", &size);
   printf("enter the values of the array\n");
   for(i=0; i<size; i++)
    {
      scanf("%d", &arr[i]);
    }
   printf(" enter the element to search\n");
   scanf("%d",&search);
   for(i=0; i<size; i++)
    {
      if(search == arr[i])
      {
        found = 1;
          break;
      }
    }
    if(found==1)
    printf("\n%d element is at location %d", search, i+1);
    else
    printf("element is not matching");

   return 0;
}
