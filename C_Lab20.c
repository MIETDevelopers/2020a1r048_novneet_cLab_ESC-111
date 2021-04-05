#include<stdio.h>
#include<string.h>
 int main()
 {
  char a[20];
  int length,k;
  printf("enter the name: \n");
  scanf("%s", a);
  // length of the string
  length = strlen(a);
  length = length - 1;
  k=0;
  while( length > k)
  {
    if(a[length]!= a[k])
    {
      printf("%s is not palindrome", a );
      break;

    }
     length--;
     k++;

  printf("%s is the palindrome", a);
 }
  return 0;
}
