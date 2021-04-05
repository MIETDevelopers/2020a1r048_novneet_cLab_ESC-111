#include<stdio.h>
#include<string.h>
 int main()
 {
   char name[30];
   int length;
   printf(" enter the  name: ");
   scanf("%s", name);
   length = strlen(name);
   printf(" the length of the name is %d", length);
   return 0;

 }
