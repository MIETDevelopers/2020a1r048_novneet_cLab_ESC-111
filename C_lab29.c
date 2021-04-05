#include<stdio.h>
struct student
{
 char name [50];
 int rollno;
 float marks;
}v;
int main()
{
  printf(" enter information: \n");
  printf("enter name: ");
  scanf("%s", v.name);
  printf("enter roll no:");
  scanf("%d", &v.rollno);
  printf(" enter marks");
  scanf("%f", &v.marks);

  printf(" displaying imformation\n");
  printf("name: ");
  puts(v.name);
  printf(" roll no = %d\n", v.rollno);
  printf("marks: %f\n", v.marks);

  return 0;

}
