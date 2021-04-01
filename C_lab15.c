#include<stdio.h>
int main()
{
  char c;
  printf("enter any alphabet");
  scanf("%c",&c);
  if(c=='a' || c == 'e'|| c=='i' || c=='o' || c=='u'||
     c=='A' ||   c == 'E' || c =='I' || c=='O' || c=='U')
   {
     printf("is vowel");
   }
  else if(( c>='a' && c<='z') || ( c>='A' && c<'Z'))
    {
      printf("%c is consonant", c);

    }
  else
  {
   printf("%c is not a alphabet", c);

  }
  return 0;
}
