
#include<stdio.h>
int main()
{
   int a[10][10], b[10][10], c[10][10];
   int i, j, k;
   int arows, acolns, brows, bcolns;
   int sum;
   sum = 0;
   printf("enter the rows and columns");
   scanf("%d %d", &arows, &acolns);

   printf("enter the elements in the matrix a");
   for(i=0; i<arows; i++)
   {
     for(j=0; j<acolns; j++)
     {
         scanf("%d", &a[i][j]);
     }
   }
   printf("enter the rows and columns");
   scanf("%d %d", &brows, &bcolns);

  printf("enter the elements in the matrix a");
    for(i=0; i<brows; i++)
   {
     for(j=0; j<bcolns; j++)
     {
         scanf("%d", &b[i][j]);
     }
   }
   if(arows=bcolns)
   {
    for(i=0; i<brows; i++)
     {
     for(j=0; j<bcolns; j++)
      {
        for(k=0; k<bcolns; k++)
         {
            sum+=a[i][k]*b[k][j];
         }
        c[i][j] = sum;
        sum = 0;
    }
   }

 printf("the resultant matrix is");
  for(i=0; i<arows; i++)
   {
     for(j=0; j<bcolns; j++)
     {
        printf("%d", c[i][j]);
    }
    printf("\n");
   }
   }
    else
    {
        printf("multiplication can't be done");
    }

 return 0;
 }
