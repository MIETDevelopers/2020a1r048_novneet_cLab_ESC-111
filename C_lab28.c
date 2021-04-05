#include<stdio.h>
#include<stdlib.h>
int main()
{
 int num, i;
 printf(" Enter the total numbers:\n");
 scanf("%d", &num);
 int *arr = (int *)calloc(num, sizeof(int));
 //to increase size
 arr = realloc(arr, (num*sizeof(int)+3));

 printf(" enter the values");
 for(i=0; i<num + 3; i++)
 {
   scanf("%d", (arr+i));
 }
 for( i=0; i<num+3; i++)
 {
  printf("arr[%d] = %d\n", i, *(arr + i));
 }
 printf("arr = %p\n", arr);
 free(arr);
return 0;
}
