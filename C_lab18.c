#include<stdio.h>
int main()
{
  int a[3][3];
  int i, j;
  printf("enter the elements ( max limit is 3 in rows and 3 in columns)\n");
  for(i=0; i<3; i++)
   {
     for(j=0; j<3; j++)
     {
       printf("elements in [%d][%d] =", i,j);
       scanf("%d", &a[i][j]);
     }
   }
  for(i=0; i<3; i++)
  {
    printf("\n");
    for(j=0; j<3; j++)
     {
       printf("%d\t", a[i][j]);
     }

  }
  return 0;
}
