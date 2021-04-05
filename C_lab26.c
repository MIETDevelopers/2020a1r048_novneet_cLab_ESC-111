#include<stdio.h>
int swap( int *x, int *y)
{
 int temp = *x;
   *x = *y;
   *y = temp;
    printf(" after swap x = %d and y = %d\n", *x,*y);
}

int main()
{
  int a = 10, b = 20;
  printf("before swap a = %d and b = %d\n", a, b);
  swap( &a, &b);
  printf(" after swap a = %d and b = %d", a,b);
  return 0;


}

