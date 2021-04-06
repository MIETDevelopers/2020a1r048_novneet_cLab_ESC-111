#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num;
  FILE *fp;

  fp = fopen(" D:\\new file.txt", "r");

  fscanf(fp,"%d",&num);
  printf("value of number = %d",num);
  fclose(fp);
  return 0;

}
