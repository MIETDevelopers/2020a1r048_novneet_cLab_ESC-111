#include<stdio.h>
#include<string.h>
int main()
 {
  char a[20], b[20];
  printf(" enter the name in 1 string");
  gets(a);
  printf(" enter the name in 2 string");
  gets(b);
  strcat(a,b);
  printf("%s", a);
  return 0;



 }
