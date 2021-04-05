#include<stdio.h>

union student
{
  char name[20];
  int rollno;
  int sec;
};

int main()
{
   union student s;

   printf("enter name");
   scanf("%s", s.name);
   printf("enter roll no\n");
   scanf("%d", &s.rollno);
   printf("enter sec\n");
   scanf("%d", &s.sec);
   return 0;

}
